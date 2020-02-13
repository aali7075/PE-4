#include <vector>
#include <iostream>

std::vector< std::vector<std::string> > CreateBoard(){
  return {{ "NaN", "NaN", "NaN"}, { "NaN", "NaN", "NaN" }, { "NaN","NaN", "NaN" } };
}


void DisplayBoard(std::vector< std::vector<std::string> > board){

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      std::cout <<board[i][j]<< " ";
    }
    std::cout << "" << '\n';
  }
}


void PlaceMarker(std::vector< std::vector<std::string> > &board, std::vector<int> pos ){
  std::string marker;
  std::cout << "Please enter your marker" << '\n';
  std::cin>>marker;
  board[pos[0]][pos[1]]=marker;
}

int main() {

  std::vector< std::vector<std::string> > board = CreateBoard();
  DisplayBoard(board);

  PlaceMarker(board, v);

  std::cout << "STATE OF THE GAME" << '\n'<<'\n';
  DisplayBoard(board);

}
