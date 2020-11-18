#include <iostream>
#include <bitset>
#include <stdlib.h>
using namespace std;

string zerujBit(int liczba, int bit){
	
	int base = 0b11111111;
	int fix = 0b00000001;
	if(bit != 0){
		fix <<=bit;
	}	
	base = base ^ fix;
	string num1 = bitset<8>(liczba & base).to_string();
	return num1;
}

int main(int argc, char** argv) {
	cout<<zerujBit(2,1);
	return 0;
}
