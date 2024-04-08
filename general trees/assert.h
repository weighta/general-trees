#pragma once
#include <iostream>

#ifndef ASSERT_H
#define ASSERT_H

void Assert(bool val, char* s) {
	if (!val) { // Assertion failed -- close the program
		std::cout << "Assertion Failed: " << s << std::endl;
		exit(-1);
	}
}
#endif