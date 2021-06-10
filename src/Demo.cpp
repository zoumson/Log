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
   
    za::my_logger::logger_type log = za::my_logger::get();
    za::Log logManager;
    logManager.set_log_file("./log/log1.log");
    BOOST_LOG_SEV(log, za::report) << "Demo Log manager using boost\n";
    BOOST_LOG_SEV(log, za::report) << "log1--->[1]...\n";
    BOOST_LOG_SEV(log, za::warning) << "log1--->[2]...\n";

    logManager.set_log_file("./log/log2.log");    
    BOOST_LOG_SEV(log, za::report)<< "log2--->[1]...\n";
    BOOST_LOG_SEV(log, za::error) << "log2--->[2]...\n";

    return 0;
}