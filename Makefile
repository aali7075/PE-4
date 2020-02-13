CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: game

clean:
	rm game

game: TicTacToe.cpp
	$(CXX) $(CXXFLAGS) TicTacToe.cpp -o game
