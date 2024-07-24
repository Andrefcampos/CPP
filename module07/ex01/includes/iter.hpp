
#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T, typename F>
void	iter(T *arr, std::size_t len, F func) {

	if (!arr || !func) {
		return ;
	}
	for (std::size_t i = 0; i < len; i++) {
		func(arr[i]);
	}
}

#endif
