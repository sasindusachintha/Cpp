#include<iostream>  // Include input-output stream library for console operations
#include<fstream>   // Include file stream library for reading/writing files

using namespace std;

int main(){
	// Create an output file stream object named 'outfile'
	ofstream outfile;
	
    // Open (or create if it doesn't exist) a file named "Summary.txt" in write mode
	outfile.open("Summary.txt",ios_base::out);
	
	// Write a heading to the file
	outfile<<"Here is Your Summary: "<<endl;
	
	 // Write a message to the file
	outfile<<"Everything Is ok!!"<<endl;
	
	 // Close the file to save changes and free resources
	outfile.close();
	
	return 0; // Return 0 to indicate successful execution
}
