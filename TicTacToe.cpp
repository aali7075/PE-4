#include <vector>
#include <iostream>

struct Location{
	int row;
	int col;
};

std::vector<std::vector<std::string>> CreateBoard(){
  return {{"[]","[]","[]"},{"[]","[]","[]"},{"[]","[]","[]"}};
}

void DrawBoard(std::vector<std::vector<std::string>> b){
	for (int i = 0; i < 3 ; i++){
		for (int j = 0; j < 3; j++){
		std::cout << b[i][j];
		}
		std::cout << "\n";
	}
}

Location GetPlayerChoice(){
	Location choice;
	std::cout << "Input Row Location: ";
	std::cin >> choice.row;
	std::cout << "Input Column Location: ";
	std::cin >> choice.col;
	std::cout << "\n";
	return choice;
}


int main() {

  std::vector< std::vector<std::string> > board = CreateBoard();
  DrawBoard(board);
  Location result = GetPlayerChoice();
  PlaceMarker(result);
  DrawBoard(board);
}
