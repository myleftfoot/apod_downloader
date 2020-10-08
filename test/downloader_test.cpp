#include "gtest/gtest.h"
#include "../src/downloader.cpp"
#include <string>

TEST(Downloader, callParseURI)
{
    downloader d;
    string expected = "http";
    string uri = "https";
    ASSERT_EQ(expected, d.parseURI(uri));
}