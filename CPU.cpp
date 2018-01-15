#include "CPU.hpp"

void CPU::loadRom(const std::string& filepath)
{
	if (FILE *fp = fopen(path.c_str(), "rb")){
		Byte buf[1600]; // 1kb buffer
		int i = 0;
		while (size_t len = fread(buf, 1, sizeof(buf)/16, fp) && i < 16){// load 1kb at a time
			ROMdata.insert(ROMdata.end(), buf, buf + len); // push into ROMdata
			i++;
		}
		fclose(fp); // close the file
	}
}