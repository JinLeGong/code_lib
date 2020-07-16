#include <regex>
#include <string>

//用于显示对齐
void align_str(char *a, cxtString &neigh_str)
{
	cxtString temp;
	std::string str = a;
	std::tr1::regex rx("\n");
	std::string replacement = "\n\t\t\t\t\t\t";
	std::string str2 = std::tr1::regex_replace(str, rx, replacement);
	temp.format("SYSTEM DESCRIPTION:\t\t\t\t%s\n", str2.c_str());
	neigh_str += temp;
}
