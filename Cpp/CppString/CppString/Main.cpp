#include <iostream>

// 진입점(Entry Point).
int main() {

	//auto testString = "Hello";
	const char* testString = "Hello";
	char charArray[] = "Hello";

	// 동적 할당.
	size_t length = strlen("Ronnie") + 1;
	char* name = new char[length];
	strcpy_s(name, length, "Ronnie");


	std::cout << testString << "\n";
	std::cout << charArray << "\n";
	std::cout << name << "\n";

	// char* 는 결국 배열이기 때문에 배열로 삭제.
	delete[] name;

	std::cin.get();
	return 0;
}