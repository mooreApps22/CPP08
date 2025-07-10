#pragma once
# include <iostream>
# include <stdexcept>
# include <vector>

class Span
{
    public:
		/* Methods */
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

		/* Special Members */
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

		/* Exceptions */
		class NotEnoughNumbersException : public std::exception
		{ public: const char *what() const throw(); };
		class TooManyNumbersException : public std::exception
		{ public: const char *what() const throw(); };

    private:
        unsigned int		_N;
		std::vector<int>	_numbers;
};
