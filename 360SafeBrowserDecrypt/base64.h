/*base_64.h�ļ�*/
#ifndef BASE_64_H
#define BASE_64_H

#include <string>

class Base64 {
private:
	std::string _base64_table;
static const char base64_pad = '='; public:
	Base64()
	{
		/*����Base64����ʹ�õı�׼�ֵ�*/
		_base64_table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	}
	/**
	* ���������unsigned���ͣ�����������ĵ�ʱ�����
	*/
	std::string Encode(const unsigned char* str, int bytes);
	std::string Decode(const char* str, int bytes);
	void Debug(bool open = true);
};
#endif