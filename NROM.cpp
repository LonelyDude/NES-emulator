#include "NROM.h"

NROM::NROM(byte * bytes, int size):Memory(size)
{
	delete[] memory;

	memory = new byte[size];
	this->size = size;

	for (int i = 0; i < size; i++) {
		memory[i] = bytes[i];
	}
}

byte NROM::read(word addr)
{
	return memory[addr % size];
}
