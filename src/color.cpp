#include <color.hpp>
#include <iostream>
#include <random>
#include <rang.hpp>
#include <variant>
#include <vector>

void color::assign_random() const {
	std::vector<std::variant<rang::fg, rang::fgB>> colors = {
		rang::fg::blue, rang::fg::cyan, 
		rang::fg::yellow, rang::fg::green, 
		rang::fg::magenta, rang::fg::red,
		rang::fgB::blue, rang::fgB::cyan, 
		rang::fgB::yellow, rang::fgB::green, 
		rang::fgB::magenta, rang::fgB::red
	};

	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<size_t> uid(0, colors.size() - 1);

	std::visit([](auto&& visited) -> void {
		std::cout << visited;
	}, colors.at(uid(mt)));
}