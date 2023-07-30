all:
	g++ -ggdb -O2 -pedantic-errors -Wsign-conversion -Weffc++ -Wextra -Wconversion -Wsign-conversion main.cpp
gbd:
	gdb ./a.out
