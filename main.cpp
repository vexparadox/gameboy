#include "main.hpp"

CPU cpu;
int main(int argc, char const *argv[])
{
	//cpu.loadRom(argv[1]);
	addInstructions();
	return 0;
}

void addInstructions()
{
	//Loads for A
	ins("LD", "Load A to A", 0x7F, 4, {cpu.reg_A = cpu.reg_A;});
	ins("LD", "Load B to A", 0x78, 4, {cpu.reg_A = cpu.reg_B;});
	ins("LD", "Load C to A", 0x79, 4, {cpu.reg_A = cpu.reg_C;});
	ins("LD", "Load D to A", 0x7A, 4, {cpu.reg_A = cpu.reg_D;});
	ins("LD", "Load E to A", 0x7B, 4, {cpu.reg_A = cpu.reg_E;});
	ins("LD", "Load H to A", 0x7C, 4, {cpu.reg_A = cpu.reg_H;});
	ins("LD", "Load L to A", 0x7D, 4, {cpu.reg_A = cpu.reg_L;});
	ins("LD", "Load HL to A", 0x7E, 8, {cpu.reg_A = (cpu.reg_H << 8)+cpu.reg_L;});
	
	//Loads for B
	ins("LD", "Load B to B", 0x40, 4, {cpu.reg_B = cpu.reg_B;});
	ins("LD", "Load C to B", 0x41, 4, {cpu.reg_B = cpu.reg_C;});
	ins("LD", "Load D to B", 0x42, 4, {cpu.reg_B = cpu.reg_D;});
	ins("LD", "Load E to B", 0x43, 4, {cpu.reg_B = cpu.reg_E;});
	ins("LD", "Load H to B", 0x44, 4, {cpu.reg_B = cpu.reg_H;});
	ins("LD", "Load L to B", 0x45, 4, {cpu.reg_B = cpu.reg_L;});
	ins("LD", "Load HL to B", 0x46, 8, {cpu.reg_B = (cpu.reg_H << 8)+cpu.reg_L;});
	
	//Loads for C
	ins("LD", "Load B to C", 0x48, 4, {cpu.reg_C = cpu.reg_B;});
	ins("LD", "Load C to C", 0x49, 4, {cpu.reg_C = cpu.reg_C;});
	ins("LD", "Load D to C", 0x4A, 4, {cpu.reg_C = cpu.reg_D;});
	ins("LD", "Load E to C", 0x4B, 4, {cpu.reg_C = cpu.reg_E;});
	ins("LD", "Load H to C", 0x4C, 4, {cpu.reg_C = cpu.reg_H;});
	ins("LD", "Load L to C", 0x4D, 4, {cpu.reg_C = cpu.reg_L;});
	ins("LD", "Load HL to C", 0x4E, 8, {cpu.reg_C = (cpu.reg_H << 8)+cpu.reg_L;});
	
	//Loads for D
	ins("LD", "Load B to D", 0x50, 4, {cpu.reg_D = cpu.reg_B;});
	ins("LD", "Load C to D", 0x51, 4, {cpu.reg_D = cpu.reg_C;});
	ins("LD", "Load D to D", 0x52, 4, {cpu.reg_D = cpu.reg_D;});
	ins("LD", "Load E to D", 0x53, 4, {cpu.reg_D = cpu.reg_E;});
	ins("LD", "Load H to D", 0x54, 4, {cpu.reg_D = cpu.reg_H;});
	ins("LD", "Load L to D", 0x55, 4, {cpu.reg_D = cpu.reg_L;});
	ins("LD", "Load HL to D", 0x56, 8, {cpu.reg_D = (cpu.reg_H << 8)+cpu.reg_L;});
	
	//Loads for E
	ins("LD", "Load B to E", 0x58, 4, {cpu.reg_E = cpu.reg_B;});
	ins("LD", "Load C to E", 0x59, 4, {cpu.reg_E = cpu.reg_C;});
	ins("LD", "Load D to E", 0x5A, 4, {cpu.reg_E = cpu.reg_D;});
	ins("LD", "Load E to E", 0x5B, 4, {cpu.reg_E = cpu.reg_E;});
	ins("LD", "Load H to E", 0x5C, 4, {cpu.reg_E = cpu.reg_H;});
	ins("LD", "Load L to E", 0x5D, 4, {cpu.reg_E = cpu.reg_L;});
	ins("LD", "Load HL to E", 0x5E, 8, {cpu.reg_E = (cpu.reg_H << 8)+cpu.reg_L;});
	
	//Loads for H
	ins("LD", "Load B to H", 0x60, 4, {cpu.reg_H = cpu.reg_B;});
	ins("LD", "Load C to H", 0x61, 4, {cpu.reg_H = cpu.reg_C;});
	ins("LD", "Load D to H", 0x62, 4, {cpu.reg_H = cpu.reg_D;});
	ins("LD", "Load E to H", 0x63, 4, {cpu.reg_H = cpu.reg_E;});
	ins("LD", "Load H to H", 0x64, 4, {cpu.reg_H = cpu.reg_H;});
	ins("LD", "Load L to H", 0x65, 4, {cpu.reg_H = cpu.reg_L;});
	ins("LD", "Load HL to H", 0x66, 8, {cpu.reg_H = (cpu.reg_H << 8)+cpu.reg_L;});

	//Loads for L
	ins("LD", "Load B to L", 0x68, 4, {cpu.reg_L = cpu.reg_B;});
	ins("LD", "Load C to L", 0x69, 4, {cpu.reg_L = cpu.reg_C;});
	ins("LD", "Load D to L", 0x6A, 4, {cpu.reg_L = cpu.reg_D;});
	ins("LD", "Load E to L", 0x6B, 4, {cpu.reg_L = cpu.reg_E;});
	ins("LD", "Load H to L", 0x6C, 4, {cpu.reg_L = cpu.reg_H;});
	ins("LD", "Load L to L", 0x6D, 4, {cpu.reg_L = cpu.reg_L;});
	ins("LD", "Load HL to L", 0x6E, 8, {cpu.reg_L = (cpu.reg_H << 8)+cpu.reg_L;});

	//Loads for HL
	ins("LD", "Load B to HL", 0x70, 8, {cpu.reg_A = cpu.reg_B;});
	ins("LD", "Load C to HL", 0x71, 8, {cpu.reg_A = cpu.reg_C;});
	ins("LD", "Load D to HL", 0x72, 8, {cpu.reg_A = cpu.reg_D;});
	ins("LD", "Load E to HL", 0x73, 8, {cpu.reg_A = cpu.reg_E;});
	ins("LD", "Load H to HL", 0x74, 8, {cpu.reg_A = cpu.reg_H;});
	ins("LD", "Load L to HL", 0x75, 8, {cpu.reg_A = cpu.reg_L;});

}