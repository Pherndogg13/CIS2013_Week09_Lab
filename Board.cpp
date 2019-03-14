#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;



class Board {
	private:
		static const int B_SIZE = 8;
		char spaces[B_SIZE][B_SIZE];
		bool occupied[B_SIZE][B_SIZE];
		int cord[B_SIZE];
		
			
	public:
		
		void choooseCord(int x){
			cout << "Give me a x cord (1-8): " << endl;
			cin >> cord[B_SIZE];
			cout << "Give me a y cord (1-8): " << endl;
			cin >> cord[B_SIZE];
}

		void setup(){
			for(int i=0;i<B_SIZE;i++){
				for(int j=0;j<B_SIZE;j++){
					spaces[i][j] = '-';
					occupied[i][j] = false;
				}
			}
			
			srand(time(NULL));
			int x = rand() % B_SIZE;
			srand(time(NULL));
			int y = rand() % B_SIZE;
			
			occupied[x][y] = true;

		}
		
		void print(){
			cout << " 1 2 3 4 5 6 7 8";
			for(int i=0;i<B_SIZE;i++){
				cout << endl;
				for(int j=0;j<B_SIZE;j++){
					cout << spaces[i][j] << " ";
				}
			}
		}
};


