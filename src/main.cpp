#include <color.hpp>
#include <config.hpp>
#include <garbage.hpp>
#include <iostream>

int main() {
	const garbage garbage_printer;

	const color colorizer;

	for (char char_to_print : to_print) {
		colorizer.assign_random();
		garbage_printer.print();

		std::cout << char_to_print;
	}

	std::cout << "\n";
}