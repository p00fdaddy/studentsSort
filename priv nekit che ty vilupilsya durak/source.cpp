#include <iostream>
#include <string>
#include <algorithm>

struct Students
{
	std::string name;
	int grade;
};

int main()
{
	std::cout << "Enter the number of students: ";

	int number;
	std::cin >> number;

	Students* arr = new Students[number];

	std::cout << "Enter names and grades of students: ";

	for (int i = 0; i < number; i++)
	{
		std::cout << "Enter the student's name: ";
		std::cin >> arr[i].name;

		std::cout << "Enter the student's grade: ";
		std::cin >> arr[i].grade;
	}

	for (int i = 0; i < number - 1; i++)
	{
		for (int j = 0; j < number - 1; j++)
		{
			if (arr[j].grade < arr[j + 1].grade)
			{
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 0; i < number; i++)
	{
		std::cout << arr[i].name << " got a grade of " << arr[i].grade << std::endl;
	}

	delete[] arr;
}