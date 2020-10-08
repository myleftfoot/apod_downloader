#include <iostream>
#include "downloader.hpp"
#include <string>
#include <folly/init/Init.h>
#include <folly/logging/Init.h>
#include <folly/logging/xlog.h>
#include <folly/Format.h>

using namespace std;

FOLLY_INIT_LOGGING_CONFIG(
    ".=WARNING,folly=INFO; default:async=true,sync_level=WARNING");

DEFINE_bool(
    print_version,
    false,
    "Print version of code this executable was built from and exit");

int main(int argc, char *argv[])
{
    folly::Init init(&argc, &argv);
    XLOG(INFO) << "NASA Astronomy Picture of the day dowloader.";

    if (FLAGS_print_version)
    {
        // Use std::cout so that we always write to stdout rather than the glog
        // preference for a logfile
        cout << folly::sformat("apod_downloader version: {}", "0.1.0")
             << endl;
        return 0;
    }
    
    downloader d;
    string uri = "https";
    cout << d.parseURI(uri) << endl;
}