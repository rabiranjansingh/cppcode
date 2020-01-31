#include<iostream>
#include<string>
using namespace std;
class Pcl
{

private:

	int emp_id;
	string emp_name;
	string deg;

public :
	 
	// argument variable should be diffrenet from instance variable 
	Pcl(int id, string name, string d)
	{

		emp_id = id;
		emp_name = name;
		deg = d;
	  
	}

	void show()
	{

		std::cout << " id is " << emp_id << " name " << emp_name << " deg " << deg << std::endl;
	}


};

int main()
{

	Pcl obj(2, "rabi", "sw");
	obj.show();

	int n = 0;
	cin >> n;
	cin >> n;
	cin >> n;
	return 0;


}