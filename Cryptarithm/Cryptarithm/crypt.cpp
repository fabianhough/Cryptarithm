#include <iostream>
#include <vector>
using namespace std;


class Word {
private:
	string name;
	int eval;
public:
	Word() :name(""), eval(0) {}
	Word(string newname) :name(newname), eval(0) {}

	void evaluate(char *key);

	int get_eval() const { return eval; }


};

void Word::evaluate(char *key) {
	int place = name.length();

	for (int i = 0; i < place; i++) {
		for (int j = 0; j < 10; j++) {
			if (name[i] == key[j])
				eval += j * pow(10, place - i - 1);
		}
	}
}


int main() {
	char *arr = new char[10];
	arr[1] = 'E';
	arr[2] = 'T';
	arr[3] = 'S';

	Word test("TEST");
	test.evaluate(arr);


	cout << test.get_eval() << endl;

	return 0;


}