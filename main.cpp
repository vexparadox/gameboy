#include "main.hpp"
int main(int argc, char const *argv[])
{
	if(argc < 2)
	{
		return -1;
	}
	CPU	cpu;
	cpu.loadRom(argv[1]);
	return 0;
}