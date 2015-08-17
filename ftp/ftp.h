#ifndef _FTP_H
#define _FTP_H

#include <string>
#include "curl\curl.h"

using std::string;
namespace lmz {
	class Ftp {
	public:
		static Ftp *getInstance();
		CURL *getEasyHandle();
		~Ftp();
	private:
		Ftp();
	private:
		static Ftp* _instance;
		string _connstr;
		string _usr;
		string _pwd;
	};
}


#endif