#include "cases.h"

namespace cases{
	std::string toTitle(std::string s){
		if(s[0]<=122&&s[0]>=97) s[0]-=32;
		for(int i=1;i<s.size();++i){
			if(s[i]<=90&&s[i]>=65)
				s[i]+=32;
		}
		return s;
	}

	std::string toLower(std::string s){
		for(int i=0;i<s.size();++i){
			if(s[i]<=90&&s[i]>=65)
				s[i]+=32;
		}
		return s;
	}

	char toLower(char c){
		if(c>=65&&c<=90) c+=32;
		return c;
	}

	bool isLower(std::string s){
		bool flag = 1;
		for(char c:s){
			if(!(c>=97&&c<=122))
				flag = 0;
		}
		return flag;
	}

	bool isLower(char c){
		return c>=97&&c<=122;
	}

	std::string toUpper(std::string s){
		for(int i=0;i<s.size();++i){
			if(s[i]>=97&&s[i]<=122)
				s[i]-=32;
		}
		return s;
	}

	char toUpper(char c){
		if(c>=97&&c<=122) c-=32;
		return c;
	}

	bool isUpper(std::string s){
		bool flag = 1;
		for(char c:s){
			if(!(c>=65&&c<=90))
				flag = 0;
		}
		return flag;
	}

	bool isUpper(char c){
		return c>=65&&c<=90;
	}

	std::string swapcase(std::string s){
		for(int i=0;i<s.size();++i){
			if(s[i]>=97&&s[i]<=122)
				s[i]-=32;
			else if(s[i]>=65&&s[i]<=90)
				s[i]+=32;
		}
		return s;
	}

	char swapcase(char c){
		if(c>=65&&c<=90) c+=32;
		else if(c>=97&&c<=122) c-=32;
		return c;
	}
}