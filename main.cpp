#include <stdio.h>

template <typename Type>

Type Min(Type a, Type b) {
	if (a < b) {
		return static_cast<Type>(a);
	}
	if (a > b) {
		return static_cast<Type>(b);
	}
}

template <>
char Min(char a, char b) {
	printf("数字以外は代入できません");
	return 0;
}

int main(void) {
	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(10, 2));
	printf("%f\n", Min<double>(1, 2));
	Min<char>('1', '2');
	return 0;
}