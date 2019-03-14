#include <iostream>
#include <string>
#include "Board.cpp"

using namespace std;

int main(){
	
	Board chess;
	
	chess.setup();
	chess.print();
	
	return 0;
}