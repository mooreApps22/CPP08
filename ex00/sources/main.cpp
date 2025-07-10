#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>

void	prompter(int& input, bool loading)
{
	if (loading)
		std::cout << "Pick an integer to load --> ";
	else
		std::cout << "Pick an integer to find --> ";
	std::cin >> input;
}

int	main(void)
{
	std::deque<int> grades;
	int input;

	for (int i = 0; i < 5; ++i)
	{
		prompter(input, true);
		grades.push_back(input);
	}
	prompter(input, false);

	try {
		std::deque<int>::iterator it = easyfind(grades, input);
		std::cout << "Located: " << *it << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
