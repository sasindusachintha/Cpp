#include<iostream>
#include<fstream>

using namespace std;

int main(){
	// Create a file input stream object
	ifstream infile;
	
	// Variable to store the running total
	int total=0;
	
	// IMPORTANT:
    // Make sure the file "summary.txt" is in the same folder as the .cpp file.
    // If you download the file, rename it EXACTLY as "summary.txt" or the program won't work.
	infile.open("summary.txt",ios_base::in);
	
	// Temporary string to hold each line read from the file
	string lineIn;
	
	// Read each line until end of file
	while(getline(infile,lineIn)){
		// Convert the line (string) to an integer and add to total
		total+=stoi(lineIn);		
	}
	 // Close the file after reading
	infile.close();
	// Display the final total
	cout<<"Total= "<<total;
}


