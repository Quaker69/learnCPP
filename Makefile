all:
	g++ -ggdb -O2 -pedantic-errors -Wsign-conversion -Weffc++ -Wextra -Wconversion -Wsign-conversion -std=c++2a main.cpp
gbd:
	gdb ./a.out
rm:
	rm ./a.out
