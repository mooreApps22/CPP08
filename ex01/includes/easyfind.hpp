#pragma once
# include <algorithm>
# include <stdexcept>


template <typename T>
typename T::iterator	easyfind(T& container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n); 
	if (it == container.end())
		throw std::runtime_error("That integer is not in this container!");
	return (it);
}
