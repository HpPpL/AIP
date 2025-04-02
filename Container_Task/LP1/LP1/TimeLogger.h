#pragma once

#include <iostream>
#include <fstream>
#include <chrono>
#include <string>

namespace time_log {

	class TimeLogger {
	public:
		TimeLogger(const std::string& path_to_out_file);

		using clock = std::chrono::high_resolution_clock;
		using time_point = std::chrono::time_point<clock>;

		void reset_start();
		void log_duration(int cont_size, const char* type, const char* opt_message); // ="" пишем тут.
		void log_duration(int cont_size, const char* type);

	private:
		time_point m_start;
		std::ofstream m_fout;
	};
}
