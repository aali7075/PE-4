#include <vector>
#include <iostream>

std::vector< std::vector<std::string> > CreateBoard(){
  return {{ "", "", ""}, { "", "", "" }, { "","", "" } };
}

void DrawBoard(std::vector<std::vector<std::string>> b){
for (int i = 0; i < 3 ; i++){
	for (int j = 0; j < 3; j++){
	std::cout << b[i][j];
	}
	std::cout << endl;
}



int main() {
  std::vector< std::vector<std::string> > board = CreateBoard();
}
