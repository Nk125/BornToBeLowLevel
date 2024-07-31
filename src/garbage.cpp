#include <garbage.hpp>
#include <chrono>
#include <config.hpp>
#include <iostream>
#include <random>
#include <thread>

void garbage::print() const {
	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<size_t> uid(0, garbage_to_print.size() - 1);

	for (size_t i = 0; i < garbage_quantity; i++) {
		std::cout << garbage_to_print.at(uid(mt));
		std::this_thread::sleep_for(std::chrono::milliseconds(ms_pause_garbage));
		std::cout << "\b";
		std::cout.flush();
	}
}
