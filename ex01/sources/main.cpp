#include "Span.hpp"
#include <iostream>
#include <vector>

int	main(void)
{
	try
	{
		std::cout << "\nTEST 1: " << std::endl;

		Span sp1 = Span(8);

		sp1.addNumber(1);
		sp1.addNumber(100);
		sp1.addNumber(150);
		sp1.addNumber(175);
		sp1.addNumber(182);
		sp1.addNumber(191);
		sp1.addNumber(196);
		sp1.addNumber(200);
		std::cout << "Shortest span:\n" << sp1.shortestSpan() << std::endl;
		std::cout << "Longest span:\n"  << sp1.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "\t\t!!!Exception Caught: " << e.what() << std::endl;
	}
	try
	{
		std::cout << "\nTEST 2: " << std::endl;

		Span sp2 = Span(0);

		std::cout << "Shortest span:\n" << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span:\n" << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "\t\t!!!Exception Caught: " << e.what() << std::endl;
	}
	try
	{
		std::cout << "\nTEST 3: " << std::endl;

		Span sp3 = Span(1);
		
		sp3.addNumber(666);
		std::cout << "Shortest span:\n" << sp3.shortestSpan() << std::endl;
		std::cout << "Longest span:\n"  << sp3.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "\t\t!!!Exception Caught: " << e.what() << std::endl;
	}
	try
	{
		std::cout << "\nTEST 4: " << std::endl;
		Span sp4 = Span(2);

		sp4.addNumber(7);
		sp4.addNumber(3);
		std::cout << "Shortest span:\n" << sp4.shortestSpan() << std::endl;
		std::cout << "Longtest span:\n" << sp4.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "\t\t!!!Exception Caught: " << e.what() << std::endl;
	}
	return (0);
}
