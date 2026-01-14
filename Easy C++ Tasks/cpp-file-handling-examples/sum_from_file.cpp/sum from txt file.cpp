#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ifstream infile;
	int total=0;
	infile.open("summary.txt",ios_base::in);
	
	string lineIn;
	while(getline(infile,lineIn)){
		total+=stoi(lineIn);		
	}
	infile.close();
	cout<<"Total= "<<total;
}


