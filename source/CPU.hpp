#pragma once
#include "Defines.hpp"
#include <fstream>
#include <iostream>
#include <array>
#include <vector>
#include <functional>
/*
0x0000-0x3FFF: Permanently-mapped ROM bank. (0x0100 read in rom)
0x4000-0x7FFF: Area for switchable ROM banks.
0x8000-0x9FFF: Video RAM.
0xA000-0xBFFF: Area for switchable external RAM banks.
0xC000-0xCFFF: Game Boy’s working RAM bank 0 .
0xD000-0xDFFF: Game Boy’s working RAM bank 1.
0xE000-0xFE00: Echo of 0xC000 to 0xD000
0xFE00-0xFEFF: Sprite Attribute Table.
0xFF00-0xFF7F: Devices’ Mappings. Used to access I/O devices.
0xFF80-0xFFFE: High RAM Area.
0xFFFF: Interrupt Enable Register.
*/

class CPU;
struct Instruction
{
	Instruction(const std::string& name, const std::string& desc, Byte OPCode, Byte cycle_count, std::function<void(CPU&, DoubleByte)> function)
	: m_name(name), m_desc(desc), m_OPCode(OPCode), m_cycle_count(cycle_count), m_function(function){};
	std::string m_name;
	std::string m_desc;
	Byte m_OPCode;
	Byte m_cycle_count;
	std::function<void(CPU&, DoubleByte)> m_function;
};

class CPU
{
public:
	std::array<Byte, 64000> main_memory;
	std::vector<Byte> loaded_rom;
	void verifyHeaders();
	CPU(){};
	//registers, Flag register is reg
	Byte reg_A, reg_B, reg_C, reg_D, reg_E, reg_H, reg_L, reg_Flag;
	//StackPointer and ProgramCounter
	DoubleByte SP = 0xFFFE, PC;
	std::vector<Instruction> m_first_instructions;
	std::vector<Instruction> m_second_instructions;
	void loadRom(const std::string& name);
};