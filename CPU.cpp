#include "CPU.hpp"

void CPU::loadRom(const std::string& filepath)
{
	std::fill(main_memory.begin(), main_memory.end(), 0x00);
	if (FILE *fp = fopen(filepath.c_str(), "rb")){
		std::array<Byte, 1000> buffer;

		while(size_t len = fread(&buffer[0], 1, sizeof(buffer), fp))
		{
			std::copy(buffer.begin(), buffer.end(), std::back_inserter(loaded_rom));
		}
		fclose(fp); // close the file
		//verifyHeaders();
	}
}

void CPU::verifyHeaders()
{
	//Dump memory!
	for(int i = 0; i < 16000; i++)
	{
		//printf("%x", main_memory.at(i));
	}
	std::cout << std::endl;

	for(DoubleByte i = 0; i < NintendoLogoData.size(); i++)
	{
		if(main_memory.at(NintendoLogoStart+i) != NintendoLogoData.at(i))
		{
			std::cout << "Incorrect Nintendo Logo data found, escaping!" << std::endl;
			return;
		}
	}

	std::cout << "Offical Nintendo ROM detected" << std::endl;

	if(main_memory.at(0x0143) != 0x80)
	{
		std::cout << "Non-Colour GameBoy ROM" << std::endl;
	}else
	{
		std::cout << "Colour GameBoy ROM" << std::endl;
	}

	if(main_memory.at(0x014A) == 0x00)
	{
		std::cout << "Japanese ROM detected" << std::endl;
	}else
	{
		std::cout << "International ROM detected" << std::endl;
	}
	const DoubleByte title = 0x0134;
	const DoubleByte title_length = 0x0142-0x0134;
	std::cout << "Title: ";
	for(DoubleByte i = 0; i < title_length; i++)
	{
		std::cout << char(main_memory.at(title+i));
	}
	std::cout << std::endl;
}