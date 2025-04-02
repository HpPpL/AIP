#include "Load.h"

// Сначала выпишем блок для векторов.
std::vector<char> data::load_vector_char(const std::string& path_file) {
	std::vector<char> vec;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened" << "\n";
		std::cout << "Name of file is:" << path_file << "\n";
		return vec;
	}

	for (char el; fin >> el;) {
		vec.push_back(el); // изменить(!)
	}

	fin.close();
	return vec;
}

std::vector<int> data::load_vector_int(const std::string& path_file) {
	std::vector<int> vec;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return vec;
	}

	for (int el; !fin.eof();) {
		if (fin >> el) {
			vec.push_back(el);
		}
	}

	fin.close();
	return vec;
}

std::vector<double> data::load_vector_double(const std::string& path_file) {
	std::vector<double> vec;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return vec;
	}

	for (double el; !fin.eof();) {
		if (fin >> el) {
			vec.push_back(el);
		}
	}

	fin.close();
	return vec;
}

std::vector<std::string> data::load_vector_string(const std::string& path_file) {
	std::vector<std::string> vec;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return vec;
	}

	for (std::string el; !fin.eof();) {
		if (fin >> el) {
			vec.push_back(el);
		}
	}

	fin.close();
	return vec;
}

// Теперь определим функции для листа.
std::list<char> data::load_list_char(const std::string& path_file) {
	std::list<char> lst;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return lst;
	}

	for (char el; !fin.eof();) {
		if (fin >> el) {
			lst.push_back(el);
		}
	}

	fin.close();
	return lst;
}

std::list<int> data::load_list_int(const std::string& path_file) {
	std::list<int> lst;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return lst;
	}

	for (int el; !fin.eof();) {
		if (fin >> el) {
			lst.push_back(el);
		}
	}

	fin.close();
	return lst;
}

std::list<double> data::load_list_double(const std::string& path_file) {
	std::list<double> lst;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return lst;
	}

	for (double el; !fin.eof();) {
		if (fin >> el) {
			lst.push_back(el);
		}
	}

	fin.close();
	return lst;
}

std::list<std::string> data::load_list_string(const std::string& path_file) {
	std::list<std::string> lst;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return lst;
	}

	for (std::string el; !fin.eof();) {
		if (fin >> el) {
			lst.push_back(el);
		}
	}

	fin.close();
	return lst;
}

// И, наконец, напишем реализацию для deque.
std::deque<char> data::load_deque_char(const std::string& path_file) {
	std::deque<char> deq;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return deq;
	}

	for (char el; !fin.eof();) {
		if (fin >> el) {
			deq.push_back(el);
		}
	}

	fin.close();
	return deq;
}

std::deque<int> data::load_deque_int(const std::string& path_file) {
	std::deque<int> deq;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return deq;
	}

	for (int el; !fin.eof();) {
		if (fin >> el) {
			deq.push_back(el);
		}
	}

	fin.close();
	return deq;
}

std::deque<double> data::load_deque_double(const std::string& path_file) {
	std::deque<double> deq;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return deq;
	}

	for (double el; !fin.eof();) {
		if (fin >> el) {
			deq.push_back(el);
		}
	}

	fin.close();
	return deq;
}

std::deque<std::string> data::load_deque_string(const std::string& path_file) {
	std::deque<std::string> deq;
	std::ifstream fin(path_file);

	if (!fin.is_open()) {
		std::cout << "The file can't be opened";
		std::cout << "Name of file is:" << path_file << "\n";
		return deq;
	}

	for (std::string el; !fin.eof();) {
		if (fin >> el) {
			deq.push_back(el);
		}
	}

	fin.close();
	return deq;
}
