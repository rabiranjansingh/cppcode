#include<fstream>
#include<iostream>
#include<string>
#define FILEMNAME NOTES.TXT
using namespace std;

int main()
{

	ofstream fw("rabiranjan.txt",ofstream::out);
	for (int i = 0; i < 10; i++)
	{
		fw << i << " " << endl;
	}


	//ofstream   method
	// method open 
	std::ofstream ofs;
	ofs.open("test.txt", std::ofstream::out | std::ofstream::app);// std::ofstream::app   append to existing files 
	for (int  i = 0; i < 5; i++)
	{

		ofs << i << endl;
	}
	ofs << " more lorem ipsum";
	ofs.close();



	// writing 
	//ofstream myfile;
	//myfile.open("filename.txt");  //  this will always create new files 
	//myfile << "Writing this to a file.\n";
	//myfile.close();

    //ifstream: Stream class to read from files
	//ofstream : Stream class to write to files
	//fstream: Stream class to both read and write from/to files.


	//************   ifstream    class 
	ifstream myReadFile;
	myReadFile.open("text.txt");
	string output;
	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {

			myReadFile >> output;
			cout << output;

		}
	}
	myReadFile.close();




	
	//****************************  fstream  *************



	





}
