#include <vector>
#include <iostream>

struct Location{
	int row;
	int col;
};

std::vector<std::vector<std::string>> CreateBoard(){
  return {{"[]","[]","[]"},{"[]","[]","[]"},{"[]","[]","[]"}};
}



void DisplayBoard(std::vector< std::vector<std::string> > board){

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
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
	std::cout << "\n";
	return choice;
}

void PlaceMarker(std::vector< std::vector<std::string> > &board, Location pos){
  std::string marker;
  std::cout << "Please enter your marker" << '\n';
  std::cin>>marker;
  board[pos.row][pos.col]=marker;
}

int main() {

  std::vector< std::vector<std::string> > board = CreateBoard();
	for(int i=0; i<9; i++){
	std::cout << "STATE OF THE GAME"<<'\n';
	std::cout << "Turn " << i<< '\n'<<'\n';
	DisplayBoard(board);
  Location result = GetPlayerChoice();
	PlaceMarker(board, result);
	}
}
