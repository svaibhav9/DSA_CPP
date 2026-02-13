CXX = g++
CXXFLAGS = -Wall -g -std=c++17
INCLUDES = -Iinclude

SRC = $(wildcard *.cpp)
TARGET = dsa.exe

all:
	@$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRC) -o $(TARGET)

run: all
	@./$(TARGET)

clean:
	@rm -f $(TARGET)
