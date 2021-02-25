#include <iostream>
#include <vector>
#include <string>

void FunctionsReverse2(std::vector<std::string>& vec1, std::vector<std::string>& vec2)
{
	for (auto item : vec1)
	{
		vec2.push_back(item);
	}
	vec1.clear();
}

void PrintVector(const std::vector<std::string>& vec)
{
	for (auto item : vec)
	{
		std::cout << item << ' ';
	}
}

int main()
{
	std::vector<std::string> vec1 = { "bbb", "ccc" };
	std::vector<std::string> vec2 = { "aaa" };
	std::cout << "*** Before Change ***";
	std::cout << "\nvec1: ";
	PrintVector(vec1);
	std::cout << "\nvec2: ";
	PrintVector(vec2);
	FunctionsReverse2(vec1, vec2);
	std::cout << "\n\n*** After Change ***";
	std::cout << "\nvec1: ";
	PrintVector(vec1);
	std::cout << "\nvec2: ";
	PrintVector(vec2);
	std::cout << std::endl;
	return 0;
}