#include <iostream>
#include <bitset>
using namespace std;

string zerujBit(int liczba, int bit){
	string num1 = bitset<8>(liczba & bit).to_string();
	return num1;
}

int main(int argc, char** argv) {
	cout<<zerujBit(0b0000001,0);
	return 0;
}
