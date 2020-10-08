#ifndef APOD_DOWNLOADER_H
#define APOD_DOWNLOADER_H
#include <string>
#include <folly/logging/xlog.h>

using namespace std;

class downloader {
    public:
        string parseURI(const string& uri);
};
#endif