#pragma once
#include "CPU.hpp"
#include <iostream>
#include <memory>
#include "Defines.hpp"

#define ins(name, desc, opcode, cycles, function) cpu.m_first_instructions.push_back(Instruction(name, desc, opcode, cycles, [](CPU& cpu, DoubleByte param) function ));

extern CPU cpu;
void addInstructions();