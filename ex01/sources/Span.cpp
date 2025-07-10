#include "Span.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>

void	Span::addNumber(int n)
{
	if (_numbers.size() > _N)
		throw TooManyNumbersException();
	_numbers.push_back(n);
}

int		Span::shortestSpan()
{
	if (_numbers.size() == 0 || _numbers.size() == 1)
		throw NotEnoughNumbersException();

	std::vector<int>			sortedNumbers = _numbers;
	int							shortestDistance = INT_MAX; // distance is the same thing as span

	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	for (size_t i = 0; i < sortedNumbers.size() - 1; ++i)
	{
		int distance = sortedNumbers[i + 1] - sortedNumbers[i];
		if (distance < shortestDistance)
		{
			shortestDistance = distance;
			std::cout << "\tCurrent shortest distance: " << shortestDistance << std::endl;
			
		}
	}
	return (shortestDistance);
}

int		Span::longestSpan()
{
	if (_numbers.size() == 0 || _numbers.size() == 1)
		throw NotEnoughNumbersException();
	// Iterators are like pointers
	std::vector<int>::iterator	minNumIt = std::min_element(_numbers.begin(), _numbers.end());
	std::vector<int>::iterator	maxNumIt = std::max_element(_numbers.begin(), _numbers.end());

	std::cout << "\tMax: " << *maxNumIt << std::endl;
	std::cout << "\tMin: " << *minNumIt << std::endl;
	return (*maxNumIt - *minNumIt);
}

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& other) : _N(other._N)
{
	*this = other;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
		this->_N = other._N;
	return (*this);
}

Span::~Span() {}

const char*	Span::NotEnoughNumbersException::what() const throw()
{
	return ("Not enough numbers!");
}

const char*	Span::TooManyNumbersException::what() const throw()
{
	return ("Too many numbers!");
}
