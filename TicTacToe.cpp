#include <vector>
#include <iostream>

std::vector< std::vector<std::string> > CreateBoard(){
  return {{ "", "", ""}, { "", "", "" }, { "","", "" } };
}





int main() {
  std::vector< std::vector<std::string> > board = CreateBoard();
}
