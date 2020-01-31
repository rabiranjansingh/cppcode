#include<iostream>

class country
{
public:

	country()
	{
		std::cout << "\n Constructor called \n";
	}

	void setNumOfCities(int num);
	int getNumOfCities(void);

	~country()
	{
		std::cout << "\n Destructor called \n";
	}

private:

	int num_of_cities;

};

void country::setNumOfCities(int num)
{
	num_of_cities = num;
}

int country::getNumOfCities(void)
{
	return num_of_cities;
}

int main(void)
{
	country obj;
	int num = 5;

	obj.setNumOfCities(num);
	num = obj.getNumOfCities();

	std::cout << "\n Number of cities is equal to " << num;


	int n = 0;
	std::cin >> n;
	return 0;
}