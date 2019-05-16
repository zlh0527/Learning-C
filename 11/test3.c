#include <stdio.h>
#include <stdlib.h>
int main() {
	int single = 0;
	int i = 0;
	int arr[] = { 1,2,3,4,5,5,4,3,2,1,7 };
	single = arr[0]; 
	for (i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		//异或的特点：两个相同的数字异或必为0；0和任何数异或还是这个数本身；
		//总体来说，对应比特位相同为0，相异为1
		single = single ^ arr[i]; //遍历数组异或，把单一的数字留下来
	}
	printf("%d\n", single);
	system("pause");
	return 0;
}