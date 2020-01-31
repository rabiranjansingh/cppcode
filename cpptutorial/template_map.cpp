#include<iostream>;
#include<string>
#include<map>
using namespace std;
int main()
{


	std::map<int, string>    map;

	int length = map.size();
	std::cout << "length of map is " << length << endl;
	

	int key;
	string values;
	std::pair<int, string>  p;
	for (int i = 0; i < 4; i++)
	{

		char input[100];
		cin.getline(input, sizeof(input));


		cin >> key;
		std::cin >> values;
		p.first = key;
		p.second = values;	
		map.insert(p);
		std::cout << "length of map is " << map.size() << endl;

	}
    


	for (std::map<int, string>::iterator it = map.begin(); it != map.end(); ++it)
	{
		std::cout << " first " << it->first << "   " << it->second << endl;
	}


	int n = 0;
	std::cin >> n;
	return 0;
}