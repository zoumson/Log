#include <iostream>
#include "Log.h"
/*
enum sign_severity_level 
{
  trace,
  debug,
  info,
  warning,
  error,
  fatal,
  report
};
*/
int main() 
{
    std::cout << "Demo Log manager using boost\n";
    za::my_logger::logger_type log = za::my_logger::get();
    za::Log logManager;
    logManager.set_log_file("log1.txt");
    BOOST_LOG_SEV(log, za::report) << "log1--->[1]...\n";
    BOOST_LOG_SEV(log, za::warning) << "log1--->[2]...\n";

    logManager.set_log_file("log2.txt");    
    BOOST_LOG_SEV(log, za::info) << "log2--->[1]...\n";
    BOOST_LOG_SEV(log, za::error) << "log2--->[2]...\n";

    return 0;
}