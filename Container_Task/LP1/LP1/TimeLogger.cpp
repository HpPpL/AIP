#include "TimeLogger.h"

time_log::TimeLogger::TimeLogger(const std::string& path_to_out_file)
	: m_start(clock::now()), m_fout(path_to_out_file)
{
	if (!m_fout.is_open()) {
		std::cout << "The file can't be opened" << "\n";
		std::cout << "Name of file is:" << path_to_out_file << "\n";
		return;
	}
	m_fout << "sep=;\n";
	m_fout << "Duration (ns); Size; Type; Message\n";
}

void time_log::TimeLogger::reset_start() {
	m_start = clock::now();
}

void time_log::TimeLogger::log_duration(int cont_size, const char* type, const char* opt_message) {
	std::chrono::nanoseconds duration = clock::now() - m_start;
	m_fout << duration.count() << ';' << cont_size << ';' << type << ';' << opt_message << '\n';
}

void time_log::TimeLogger::log_duration(int cont_size, const char* type) {
	std::chrono::nanoseconds duration = clock::now() - m_start;
	m_fout << duration.count() << ';' << cont_size << ';' << type << ';' << '\n';
}
