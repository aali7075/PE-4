#include <vector>
#include <iostream>

std::vector< std::vector<std::string> > CreateBoard(){
  return {{ "", "", ""}, { "", "", "" }, { "","", "" } };
}

void DrawBoard(){
for (int i = 0; i < 3 ; i++){
	for (int j = 0; j < 3; j++){
	std::cout << " ";
	}
	std::cout << endl;
}



int main() {
  std::vector< std::vector<std::string> > board = CreateBoard();
}
