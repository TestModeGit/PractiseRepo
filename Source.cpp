#include <iostream>

//Compile: g++ Source.cpp -o Test.exe
//CMake: cmake -G "MinGW Makefiles" -B Build
//CMake: cmake --build ./Build

int add(int x, int y)
{
	return x + y;
}

int main()
{
	std::cout<<"Hello World - First Program Third Commit\n";
	std::cout<<"The Sum of 1 + 3 = " << add(1,3) << "\n";
	return 0;
}