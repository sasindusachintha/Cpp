#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream outfile;
	outfile.open("Summary.txt",ios_base::out);
	outfile<<"Here is Your Summary: "<<endl;
	outfile<<"Everything Is ok!!"<<endl;
	outfile.close();
}
