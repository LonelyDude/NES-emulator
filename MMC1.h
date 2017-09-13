#pragma once
#include "Memory.h"

class MMC1: public Memory
{
public:
	MMC1(byte * bytes, int size);

	byte read(word addr);
	void write(word addr, byte value);

	void control(byte value);
};

