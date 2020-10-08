#include <string>
#include <folly/logging/xlog.h>

using namespace std;

class downloader {
    public:
        string parseURI(const string& uri);
};