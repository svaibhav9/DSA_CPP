# Makefile for g++ in Cygwin

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -g

# Target executable name
TARGET = MyProgram.exe

# Source files
SRC = MyProgram.cpp

MAKEFLAGS += --no-print-directory

# Default rule
all: $(TARGET)


$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run rule (always rebuild first)
run:
	$(MAKE) all
	./$(TARGET)

# Clean rule
clean:
	rm -f $(TARGET) *.o

