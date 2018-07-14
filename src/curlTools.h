#pragma once
#include <string>
#include <curl/curl.h>
#include "ByteBuffer.h"

namespace biliroku {
	using std::string;

	curl_slist *getCurlHeader();
	size_t readCurlUChar(void * buffer, size_t size, size_t nmemb, void * userp);

	void CURL_simple_get(string url, ByteBuffer &out, bool isUseProxy, string proxyStr);
	CURL *curl_easy_handler_builder(string url, ByteBuffer &out, curl_slist *headers, bool isUseProxy, string proxyStr);
}