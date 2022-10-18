#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string prim[256];
	string line;
	int i=0;
	ifstream file("PRIM.txt");
	if(file.is_open()){
		while(getline(file, line)) {
			prim[i] = line.substr(1,10);
			// cout << prim[i];
			prim[i+1] = line.substr(13,10);
			// cout << prim[i];
			prim[i+2] = line.substr(25,10);
			// cout << prim[i];
			prim[i+3] = line.substr(37,10);
			// cout << prim[i];
			i = i + 4;
		}
		file.close();
	} else {
		cout << "Unable to open file";
		return 1;
	}
	for(int j=0;j<256;j++){
		cout << "prim [" << j << "] value: " << prim[j] << endl;
	}
	cout << i << ' ' << endl;
	return 0;
}