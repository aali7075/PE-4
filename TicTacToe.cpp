#include <vector>
#include <iostream>

struct Location{//struct that holds the row and column of the Location
	int row;
	int col;
};

std::vector<std::vector<std::string>> CreateBoard(){
  return {{"[]","[]","[]"},{"[]","[]","[]"},{"[]","[]","[]"}};
}//sets up the empty board as [] as placeholders



void DisplayBoard(std::vector< std::vector<std::string> > board){//displays the board

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){//sets up the 2d array and prints the board
      std::cout <<board[i][j]<< " ";
    }
    std::cout << "" << '\n';
  }
}

Location GetPlayerChoice(){
	Location choice;
	std::cout << "Input Row Location Index Starts At 0: ";
	std::cin >> choice.row;
	std::cout << "Input Column Location Index Starts At 0: ";
	std::cin >> choice.col;
	std::cout << "\n";//takes in the player input and returns the struct ahtt holds the row and col of the choice
	return choice;
}

void PlaceMarker(std::vector< std::vector<std::string> > &board, Location pos){
  std::string marker;
  std::cout << "Please enter your marker" << '\n';
  std::cin>>marker;
  board[pos.row][pos.col]=marker;//places the location gathered from GetPlayerChoice and places the marker the user puts selects in that position
}

int main() {

  std::vector< std::vector<std::string> > board = CreateBoard();// creates an instance of the board
	for(int i=0; i<9; i++){//9 turns
	std::cout << "STATE OF THE GAME"<<'\n';
	std::cout << "Turn " << i<< '\n'<<'\n';
	DisplayBoard(board);//prints out the turn number and then displays the board
  Location result = GetPlayerChoice();//calls the function and setting the reulst struct into the returned position
	PlaceMarker(board, result);//places the set result in to the board.
	}
}
