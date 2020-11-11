#include<string>
#include<iostream>
template < typename T >
void Swap(T& One, T& Two) {
	T C = One;
	One = Two;
	Two = C;
}
template <typename H>
class SafeArray{
private:
	H* Arr;
	int Length;
public:
	SafeArray(H* Arr1, int Length1) { this->Arr = Arr1; this->Length = Length1; };
	SafeArray(SafeArray& One) { this->Arr = One->Arr; this->Length = One->Length; };
	H* GetArr() { return this->Arr; };
	int GetLength() { return this->Length; };
	void SetArr(H* Arr1) { this->Arr = Arr1; };
	void SetLength(int Length1) { this->Length = Length1; };
	void ShowArr() { for (int i = 0; i < this->Length; i++) { std::cout << Arr[i] << ' '; }; std::cout << '\n'; };
	H operator[](int i) { return this->Arr[i]; };
	void push(H New) { int length = this->Length; H* arr = new H[length + 1]; 
	for (int i = 0; i < length; i++) { arr[i] = this->Arr[i]; }; 
	arr[length] = New; this->SetArr(arr); this->SetLength(length + 1);	}
};
template <typename J>
struct Point {
	J x;
	J y;
	J z;
	J LengthPointToPoint(Point<J> One, Point<J> Two) { return sqrt((One.x - Two.x) * (One.x - Two.x) + (One.y - Two.y) * (One.y - Two.y) + (One.z - Two.z) * (One.z - Two.z)); };
};