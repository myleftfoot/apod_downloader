#include <sstream>

class request {
    virtual std::ostringstream getDocument(std::string & url);
    virtual std::ofstream getFile(std::string & url);
};