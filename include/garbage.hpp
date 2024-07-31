#pragma once
#include <vector>

class garbage {
private:
	const std::vector<char> garbage_to_print {
		'?', '-', '/', '_', '=', '|', ';', ':', '\\', '.', ',', '!', '(', ')'
	};

public:
	void print() const;
};