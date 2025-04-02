#include "Experiments.h"
#include "Load.h"
#include "TimeLogger.h"
#include <string>
#include <algorithm>
#include <iterator>

std::string data_path = "C:\\Users\\ender\\Desktop\\LP1\\Generator\\Data\\";
std::string reults_path = "C:\\Users\\ender\\Desktop\\LP1\\Results\\";

void experiments::ex_all() {
	ex_find_test();
	ex_sort_test();
	ex_pop_bf_test();
	ex_push_bf_test();
}

void experiments::ex_find_test() {
	find_test_char();
	find_test_int();
	find_test_double();
	find_test_string();
}

void experiments::ex_sort_test() {
	sort_test_char();
	sort_test_int();
	sort_test_double();
	sort_test_string();
}

void experiments::ex_pop_bf_test() {
	popB_test_char();
	popB_test_int();
	popB_test_double();
	popB_test_string();

	popF_test_char();
	popF_test_int();
	popF_test_double();
	popF_test_string();
}

void experiments::ex_push_bf_test() {
	pushB_test_char();
	pushB_test_int();
	pushB_test_double();
	pushB_test_string();

	pushF_test_char();
	pushF_test_int();
	pushF_test_double();
	pushF_test_string();
}


// 1 блок - поиск.
void experiments::find_test_char() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "find_test_char.csv");
	std::string TD = "char_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<char> arr = data::load_vector_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), '/');
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<char> arr = data::load_deque_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), '/');
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<char> arr = data::load_list_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), '/');
		timer.log_duration(i, "List");
	}
}

void experiments::find_test_int() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "find_test_int.csv");
	std::string TD = "int_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<int> arr = data::load_vector_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), '/');
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<int> arr = data::load_deque_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), '/');
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<int> arr = data::load_list_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), '/');
		timer.log_duration(i, "List");
	}
}

void experiments::find_test_double() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "find_test_double.csv");
	std::string TD = "double_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<double> arr = data::load_vector_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), '/');
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<double> arr = data::load_deque_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), '/');
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<double> arr = data::load_list_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), '/');
		timer.log_duration(i, "List");
	}
}

void experiments::find_test_string() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "find_test_string.csv");
	std::string TD = "string_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<std::string> arr = data::load_vector_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), "/");
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<std::string> arr = data::load_deque_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), "/");
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<std::string> arr = data::load_list_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::find(arr.begin(), arr.end(), "/");
		timer.log_duration(i, "List");
	}
}

// 2 блок - сортировка.
void experiments::sort_test_char() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "sort_test_char.csv");
	std::string TD = "char_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<char> arr = data::load_vector_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::sort(arr.begin(), arr.end());
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<char> arr = data::load_deque_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::sort(arr.begin(), arr.end());
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<char> arr = data::load_list_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		arr.sort();
		timer.log_duration(i, "List");
	}
}

void experiments::sort_test_int() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "sort_test_int.csv");
	std::string TD = "int_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<int> arr = data::load_vector_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::sort(arr.begin(), arr.end());
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<int> arr = data::load_deque_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::sort(arr.begin(), arr.end());
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<int> arr = data::load_list_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		arr.sort();
		timer.log_duration(i, "List");
	}
}

void experiments::sort_test_double() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "sort_test_double.csv");
	std::string TD = "double_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<double> arr = data::load_vector_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::sort(arr.begin(), arr.end());
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<double> arr = data::load_deque_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::sort(arr.begin(), arr.end());
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<double> arr = data::load_list_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		arr.sort();
		timer.log_duration(i, "List");
	}
}

void experiments::sort_test_string() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "sort_test_string.csv");
	std::string TD = "string_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<std::string> arr = data::load_vector_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::sort(arr.begin(), arr.end());
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<std::string> arr = data::load_deque_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		std::sort(arr.begin(), arr.end());
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<std::string> arr = data::load_list_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		arr.sort();
		timer.log_duration(i, "List");
	}
}

// 3.1 блок - popB.
void experiments::popB_test_char() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "popB_test_char.csv");
	std::string TD = "char_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<char> arr = data::load_vector_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<char> arr = data::load_deque_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<char> arr = data::load_list_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "List");
	}
}

void experiments::popB_test_int() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "popB_test_int.csv");
	std::string TD = "int_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<int> arr = data::load_vector_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<int> arr = data::load_deque_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<int> arr = data::load_list_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "List");
	}
}

void experiments::popB_test_double() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "popB_test_double.csv");
	std::string TD = "double_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<double> arr = data::load_vector_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<double> arr = data::load_deque_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<double> arr = data::load_list_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "List");
	}
}

void experiments::popB_test_string() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "popB_test_string.csv");
	std::string TD = "string_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<std::string> arr = data::load_vector_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<std::string> arr = data::load_deque_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<std::string> arr = data::load_list_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_back();
		timer.log_duration(i, "List");
	}
}

// 3.2 блок - popF;
void experiments::popF_test_char() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "popF_test_char.csv");
	std::string TD = "char_";

	/* ƒолго работает(!!!). ћне передали, что можно написать, но не использовать.
	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<char> arr = data::load_vector_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.erase(arr.begin());
		timer.log_duration(i, "Vector");
	}
	*/

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<char> arr = data::load_deque_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_front();
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<char> arr = data::load_list_char(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_front();
		timer.log_duration(i, "List");
	}
}

void experiments::popF_test_int() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "popF_test_int.csv");
	std::string TD = "int_";

	/* ƒолго работает(!!!). ћне передали, что можно написать, но не использовать.
	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<int> arr = data::load_vector_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.erase(arr.begin());
		timer.log_duration(i, "Vector");
	}
	*/

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<int> arr = data::load_deque_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_front();
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<int> arr = data::load_list_int(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_front();
		timer.log_duration(i, "List");
	}
}

void experiments::popF_test_double() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "popF_test_double.csv");
	std::string TD = "double_";

	/* ƒолго работает(!!!). ћне передали, что можно написать, но не использовать.
	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<double> arr = data::load_vector_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.erase(arr.begin());
		timer.log_duration(i, "Vector");
	}
	*/

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<double> arr = data::load_deque_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_front();
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<double> arr = data::load_list_double(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_front();
		timer.log_duration(i, "List");
	}
}

void experiments::popF_test_string() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "popF_test_string.csv");
	std::string TD = "string_";

	/* ƒолго работает(!!!). ћне передали, что можно написать, но не использовать.
	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<std::string> arr = data::load_vector_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.erase(arr.begin());
		timer.log_duration(i, "Vector");
	}
	*/

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<std::string> arr = data::load_deque_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_front();
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<std::string> arr = data::load_list_string(data_path + TD + data_size + ".txt");
		timer.reset_start();
		while (arr.size() > 0)
			arr.pop_front();
		timer.log_duration(i, "List");
	}
}

// 4.1 блок - pushB.
void experiments::pushB_test_char() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "pushB_test_char.csv");
	std::string TD = "char_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<char> arr = data::load_vector_char(data_path + TD + data_size + ".txt");
		std::vector<char> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_back(arr[i]);
		}
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<char> arr = data::load_deque_char(data_path + TD + data_size + ".txt");
		std::deque<char> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_back(arr[i]);
		}
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<char> arr = data::load_list_char(data_path + TD + data_size + ".txt");
		std::list<char> tmp;
		std::list<char>::iterator it = arr.begin();
		timer.reset_start();
		while (it != arr.end()) {
			tmp.push_back(*it);
			++it;
		}
		timer.log_duration(i, "List");
	}
}

void experiments::pushB_test_int() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "pushB_test_int.csv");
	std::string TD = "int_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<int> arr = data::load_vector_int(data_path + TD + data_size + ".txt");
		std::vector<int> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_back(arr[i]);
		}
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<int> arr = data::load_deque_int(data_path + TD + data_size + ".txt");
		std::deque<int> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_back(arr[i]);
		}
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<int> arr = data::load_list_int(data_path + TD + data_size + ".txt");
		std::list<int> tmp;
		std::list<int>::iterator it = arr.begin();
		timer.reset_start();
		while (it != arr.end()) {
			tmp.push_back(*it);
			++it;
		}
		timer.log_duration(i, "List");
	}
}

void experiments::pushB_test_double() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "pushB_test_double.csv");
	std::string TD = "double_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<double> arr = data::load_vector_double(data_path + TD + data_size + ".txt");
		std::vector<double> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_back(arr[i]);
		}
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<double> arr = data::load_deque_double(data_path + TD + data_size + ".txt");
		std::deque<double> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_back(arr[i]);
		}
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<double> arr = data::load_list_double(data_path + TD + data_size + ".txt");
		std::list<double> tmp;
		std::list<double>::iterator it = arr.begin();
		timer.reset_start();
		while (it != arr.end()) {
			tmp.push_back(*it);
			++it;
		}
		timer.log_duration(i, "List");
	}
}

void experiments::pushB_test_string() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "pushB_test_string.csv");
	std::string TD = "string_";

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<std::string> arr = data::load_vector_string(data_path + TD + data_size + ".txt");
		std::vector<std::string> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_back(arr[i]);
		}
		timer.log_duration(i, "Vector");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<std::string> arr = data::load_deque_string(data_path + TD + data_size + ".txt");
		std::deque<std::string> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_back(arr[i]);
		}
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<std::string> arr = data::load_list_string(data_path + TD + data_size + ".txt");
		std::list<std::string> tmp;
		std::list<std::string>::iterator it = arr.begin();
		timer.reset_start();
		while (it != arr.end()) {
			tmp.push_back(*it);
			++it;
		}
		timer.log_duration(i, "List");
	}
}

// 4.2 блок - pushF.
void experiments::pushF_test_char() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "pushF_test_char.csv");
	std::string TD = "char_";

	/* ƒолго работает(!!!). ћне передали, что можно написать, но не использовать.
	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<char> arr = data::load_vector_char(data_path + TD + data_size + ".txt");
		std::vector<char> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.insert(tmp.begin(), arr[i]);
		}
		timer.log_duration(i, "Vector");
	}
	*/

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<char> arr = data::load_deque_char(data_path + TD + data_size + ".txt");
		std::deque<char> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_front(arr[i]);
		}
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<char> arr = data::load_list_char(data_path + TD + data_size + ".txt");
		std::list<char> tmp;
		std::list<char>::iterator it = arr.begin();
		timer.reset_start();
		while (it != arr.end()) {
			tmp.push_front(*it);
			++it;
		}
		timer.log_duration(i, "List");
	}
}

void experiments::pushF_test_int() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "pushF_test_int.csv");
	std::string TD = "int_";

	/* ƒолго работает(!!!). ћне передали, что можно написать, но не использовать.
	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<int> arr = data::load_vector_int(data_path + TD + data_size + ".txt");
		std::vector<int> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.insert(tmp.begin(), arr[i]);
		}
		timer.log_duration(i, "Vector");
	}
	*/

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<int> arr = data::load_deque_int(data_path + TD + data_size + ".txt");
		std::deque<int> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_front(arr[i]);
		}
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<int> arr = data::load_list_int(data_path + TD + data_size + ".txt");
		std::list<int> tmp;
		std::list<int>::iterator it = arr.begin();
		timer.reset_start();
		while (it != arr.end()) {
			tmp.push_front(*it);
			++it;
		}
		timer.log_duration(i, "List");
	}
}

void experiments::pushF_test_double() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "pushF_test_double.csv");
	std::string TD = "double_";
	
	/* ƒолго работает(!!!). ћне передали, что можно написать, но не использовать.
	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<double> arr = data::load_vector_double(data_path + TD + data_size + ".txt");
		std::vector<double> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.insert(tmp.begin(), arr[i]);
		}
		timer.log_duration(i, "Vector");
	}
	*/

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<double> arr = data::load_deque_double(data_path + TD + data_size + ".txt");
		std::deque<double> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_front(arr[i]);
		}
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<double> arr = data::load_list_double(data_path + TD + data_size + ".txt");
		std::list<double> tmp;
		std::list<double>::iterator it = arr.begin();
		timer.reset_start();
		while (it != arr.end()) {
			tmp.push_front(*it);
			++it;
		}
		timer.log_duration(i, "List");
	}
}

void experiments::pushF_test_string() {
	time_log::TimeLogger timer = time_log::TimeLogger(reults_path + "pushF_test_string.csv");
	std::string TD = "string_";

	/* ƒолго работает(!!!). ћне передали, что можно написать, но не использовать.
	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::vector<std::string> arr = data::load_vector_string(data_path + TD + data_size + ".txt");
		std::vector<std::string> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.insert(tmp.begin(), arr[i]);
		}
		timer.log_duration(i, "Vector");
	}
	*/

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::deque<std::string> arr = data::load_deque_string(data_path + TD + data_size + ".txt");
		std::deque<std::string> tmp;
		timer.reset_start();
		for (int i = 0; i < arr.size(); ++i) {
			tmp.push_front(arr[i]);
		}
		timer.log_duration(i, "Deque");
	}

	for (int i = 100000; i <= 1000000; i += 100000) {
		std::string data_size = std::to_string(i);
		std::list<std::string> arr = data::load_list_string(data_path + TD + data_size + ".txt");
		std::list<std::string> tmp;
		std::list<std::string>::iterator it = arr.begin();
		timer.reset_start();
		while (it != arr.end()) {
			tmp.push_front(*it);
			++it;
		}
		timer.log_duration(i, "List");
	}
}
