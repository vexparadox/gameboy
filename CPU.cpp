#include "CPU.hpp"

void CPU::loadRom(const std::string& filepath)
{
	if (FILE *fp = fopen(filepath.c_str(), "rb")){
		std::array<Byte, 16000> buf; // 1kb buffer
		int i = 0;
		while (size_t len = fread(&buf[0], 1, sizeof(buf), fp)){
			std::copy(buf.begin(), buf.end(), main_memory.begin());
			//main_memory.insert(main_memory.end(), buf, buf + len); // push into ROMdata
			i++;
		}
		fclose(fp); // close the file
		verifyHeaders();
	}
}

void CPU::verifyHeaders()
{
	//header data
}