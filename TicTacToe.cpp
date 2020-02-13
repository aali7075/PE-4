#include <vector>
#include <iostream>

std::vector< std::vector<std::string> > CreateBoard(){
  return {{ "", "", ""}, { "", "", "" }, { "","", "" } };
}


void DisplayBoard(std::vector< std::vector<std::string> > board){

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      std::cout <<board[i][j]<< " ";
    }
    std::cout << "" << '\n';
  }
}



int main() {
  std::vector< std::vector<std::string> > board = CreateBoard();
  DisplayBoard(board);
}
