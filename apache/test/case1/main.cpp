#include <log4cxx/logger.h>
#include <log4cxx/helpers/loglog.h>
#include <log4cxx/xml/domconfigurator.h>
 
using namespace log4cxx;
using namespace log4cxx::xml;
using namespace log4cxx::helpers;
 
// Define static logger variable

 
int main()
{
  log4cxx::helpers::LogLog::setInternalDebugging(true);
  log4cxx::MDC::put(L"processName",L"SampleAPP");
  log4cxx::xml::DOMConfigurator::configureAndWatch("Log4cxxConfig.xml");
  LoggerPtr logger(Logger::getLogger( "functionA"));
  //  while (100)
  {
    LOG4CXX_INFO(logger,"\%properties{processName}Info Message"); 
    LOG4CXX_ERROR(logger,"Error Message");
  }

  return 0;
}
