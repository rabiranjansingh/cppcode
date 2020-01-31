#include<iostream>;
#include<string>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <list>
#include<map>

using namespace std;


class Filereading
{

private :
	string fname;
public :

	void readfiles(string name)
	{
		std::ifstream infile("thefile.txt");
		int a, b;
		while (infile >> a >> b)
		{
			// process pair (a,b)
		}
	}


	void writefiles();


};



void Filereading::writefiles()
{
	
	ofstream myfile;
	myfile.open("test_one.txt");
	for (int i = 0; i < 10000; i++)
	{
		myfile << rand()<<"   ";
		myfile << rand() << endl;;
	}

	myfile.close();
	std::cout << "writing done " << std::endl;
}


int main()
{


	//std::map<int, string>    map;

	//int length = map.size();
	//std::cout << "length of map is " << length << endl;


	//int key;
	//char input[100];
	//std::pair<int, string>  p;
	//for (int i = 0; i < 4; i++)
	//{

	//
	//
	//	cin >> key;
	//	cin.getline(input, sizeof(input));
	//	p.first = key;
	//	p.second = input;
	//	map.insert(p);
	//	std::cout << "length of map is " << map.size() << endl;

	//}


	//for (std::map<int, string>::iterator it = map.begin(); it != map.end(); ++it)
	//{
	//	std::cout << " first " << it->first << "   " << it->second << endl;
	//}




	// file 


	Filereading  obj;
	obj.writefiles();








	int n = 0;
	std::cin >> n;
	return 0;
}