#pragma once
# include <iostream>
# include <stack>
# include <deque>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
		//typedef iterators
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

		// Methods
		iterator		begin() { return this->c.begin(); }
		iterator		end() { return this->c.end(); }
		const_iterator	begin() const { return this->c.begin(); }
		const_iterator	end() const { return this->c.end(); }

		//Special Methods
        MutantStack() {}
        MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}
        MutantStack& operator=(const MutantStack& other) {
			if (this != &other)
				std::stack<T, Container>::operator=(other);
			return *this;
		}
        ~MutantStack() {}
};
