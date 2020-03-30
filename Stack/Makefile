# Is in make scripting language

# Be sure to change this -- assignment name
EXECUTABLE := myStack

SOURCES := *.cpp

INCLUDES := -I ../INCLUDESEXT := out
CC := g++

all:
	$(CC) $(INCLUDES) $(SOURCES) -o $(EXECUTABLE).$(EXT)

# Removes files with the following extensions from the folder

	realclean:
		find . -type f -name "*.o" - exec rm '{}' \;
		find . -type f -name "*.exe" - exec rm '{}' \;
		find . -type f -name "*.out" - exec rm '{}' \;
		find . -type f -name "*.gch" - exec rm '{}' \;
		

