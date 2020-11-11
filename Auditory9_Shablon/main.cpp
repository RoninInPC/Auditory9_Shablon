#include<iostream>
#include<fstream>
#include"Shablon.hpp"
int main() {
	int i = 1;
	int i1 = 2;
	Swap(i, i1);
	std::cout << i << " " << i1 <<'\n';
	std::string u = "asd";
	std::string u1 = "wqe";
	Swap(u, u1);
	std::cout << u << " " << u1 << '\n';
	int A[5] = { 0,1,2,3,4 };
	SafeArray<int> B(A,5);
	B.ShowArr();
	std::string D[2] = { "Us","ES" };
	std::string D1[2] = { "US","eS" };
	SafeArray<std::string> C(D, 2);
	C.ShowArr();
	C.SetArr(D1);
	C.ShowArr();
	std::string a = C[0];
	std::ifstream File("input.txt");
	Point<double> Max = { 0,0,0 };
	int size;
	File >> size;
	Point<double>* Arr = new Point<double>[size];
	for (int i = 0; i < size; i++) {
		File >> Arr[i].x >> Arr[i].y >> Arr[i].z;
		if (Arr[i].LengthPointToPoint(Arr[i], { 0,0,0 }) > Arr[i].LengthPointToPoint(Max, { 0,0,0 })) {
			Max = Arr[i];
		}
	}
	File.close();
	std::cout << Max.x << ' ' << Max.y << ' ' << Max.z << '\n';
	return 0;
}