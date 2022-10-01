#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
class Mass
{
public:
	Mass(T a, T b, T c, T d, T e) {
		mas[0] = a;
		mas[1] = b;
		mas[2] = c;
		mas[3] = d;
		mas[4] = e;
	};
	T mas[5];
	void print() {
		for (size_t i = 0; i < 5; i++)
		{
			cout << mas[i] << " ";
		}
		cout << endl;
	}
};
int main()
{
	Mass <float> arr(1.5, 2.1, 3.4, 4.4, 5.2);
	arr.print();

	Mass <char> arr2('h', 'e', 'l', 'l', 'o');
	arr2.print();
}