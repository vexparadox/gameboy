#pragma once
#include <cstdint>
using Byte = unsigned char;
using DoubleByte = uint16_t;

//bit masks
const Byte bit0 = 0x0001;
const Byte bit1 = 0x0002;
const Byte bit2 = 0x0004;
const Byte bit3 = 0x0008;
const Byte bit4 = 0x0010;
const Byte bit5 = 0x0020;
const Byte bit6 = 0x0040;
const Byte bit7 = 0x0080;


//to be used with |= 1 << $$
const int CarryFlag = 1;
const int ZeroFlag = 2;
const int InterruptFlag = 3; 
const int DecimalFlag = 4;
const int OverflowFlag = 7;
const int NegativeFlag = 8;

const uint32_t ClockSpeedHZ = 4194304;