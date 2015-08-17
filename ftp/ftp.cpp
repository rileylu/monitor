#include "ftp.h"
using namespace lmz;

Ftp* Ftp::_instance = nullptr;

Ftp::Ftp() {
	curl_global_init(CURL_GLOBAL_WIN32);
}

Ftp * lmz::Ftp::getInstance()
{
	if (_instance == nullptr)
		_instance = new Ftp();
	return _instance;
}

Ftp::~Ftp() {
	curl_global_cleanup();
}