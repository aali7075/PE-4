#include <vector>
#include <iostream>

Person2
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
	std::cout << "Input Row Location: ";
	std::cin >> choice.row;
	std::cout << "Input Column Location: ";
	std::cin >> choice.col;
	std::cout << "\n";
	return choice;
}

void PlaceMarker(std::vector< std::vector<std::string> > &board, std::vector<int> pos ){
  std::string marker;
  std::cout << "Please enter your marker" << '\n';
  std::cin>>marker;
  board[pos[0]][pos[1]]=marker;
}

int main() {

  std::vector< std::vector<std::string> > board = CreateBoard();
  DrawBoard(board);
  Location result = GetPlayerChoice();
  DrawBoard(board);
  DisplayBoard(board);

  PlaceMarker(board, v);
  std::cout << "STATE OF THE GAME" << '\n'<<'\n';
  DisplayBoard(board);
}
