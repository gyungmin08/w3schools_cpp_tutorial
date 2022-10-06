#include <iostream>
# include <string>
using namespace std;

int Syntax() {
	cout << "----------Syntax----------\n";
	cout << "Hello World!";

	return 0;
}

int Output() {
	cout << "\n\n----------Output----------\n";
	cout << "Hello World!";
	cout << "I am learning C++";

	return 0;
}

int NewLines() {
	cout << "\n\n----------NewLines----------\n";
	cout << "Hello World!\n";
	cout << "I am learning C++" << endl;
	cout << "Hahahah this is endl";

	return 0;
}

int Comment() {
	cout << "\n\n----------Comment----------\n";
	// This is a comment
	cout << "Hello World!";
	cout << "Hello World!"; // This is a comment again
	/* The code below will prin the words Hello World!
	to the screen, and it is amazing */
	cout << "Hello World!";

	return 0;
}

int Variables() {
	cout << "\n\n----------Variables----------\n";
	int my_num = 15;
	cout << my_num;

	int my_num_1;
	my_num_1 = 15;
	cout << my_num_1;

	int my_num_2 = 15;
	my_num_2 = 10;
	cout << my_num_2;

	int num = 15;
	double float_num = 5.249239489523;
	char letter = 'D';
	string text = "Hello!";
	bool boolean = true;
	boolean = false;

	cout << "\nI am " << num << " years old.";

	int x = 6;
	int y = 7;
	int sum = x + y;
	cout << sum;

	return 0;
}

int DeclareManyVariables() {
	cout << "\n\n----------DeclareManyVariables----------\n";
	int x = 5, y = 6, z = 7;
	cout << x + y + z;

	int xx, yy, zz;
	xx = yy = zz = 50;
	cout << xx + yy + zz;

	return 0;
}

int Constants() {
	cout << "\n\n----------Constants----------\n";
	const int my_num = 15;  // my_num will always be 15
	// my_num = 10;  // error

	const int minutes_per_hour = 60;
	const float pi = 3.141592653589793238;

	return 0;
}

int UserInput() {
	cout << "\n\n----------UserInput----------\n";
	int x;
	cout << "Type a number >>> ";
	cin >> x;
	cout << "Your number is " << x;

	return 0;
}

int SimpleCarculator() {
	cout << "\n\n----------SimpleCarculator----------\n";
	int x, y, sum;
	cout << "Type a number >>> ";
	cin >> x;
	cout << "Type another number >>> ";
	cin >> y;
	sum = x + y;
	cout << "Sum is " << sum;

	return 0;

}

int DataTypes() {
	cout << "\n\n----------DataTypes----------\n";
	int my_num = 5;               // Integer (whole number)
	float my_float_num = 5.99;     // Floating point number
	double my_double_num = 9.98;   // Floating point number
	char my_letter = 'D';         // Character
	bool my_boolean = true;       // Boolean
	string my_text = "Hello";     // String

	int num = 1000;
	cout << num << endl;

	float num2 = 1000.23;
	cout << num2 << endl;

	double num3 = 19.0238984;
	cout << num3 << endl;

	float f1 = 35e3;
	cout << f1 << endl;

	double d1 = 12E4;
	cout << d1 << endl;  // e == E

	bool is_coding_fun = true;
	cout << is_coding_fun;

	char grade = 'B';
	cout << grade;

	char a = 65;  // uppercase A's ascii code
	cout << a;

	string greeting = "Hello";
	cout << greeting;

	return 0;
}

int Operators() {
	cout << "\n\n----------Operators----------\n";
	int x = 100, y = 50, sum = x + y;
	
	int addition = x + y;
	int substraction = x - y;
	int multiplication = x * y;
	int dibision = x / y;
	int modulus = x % y;  // 나머지
	int increment = ++x;  // x에 1 더하기
	int decrement = --x;  // x에서 1 빼기

	y += 5;  // y = y + 5
	y -= 10;  // y = y - 5
	y *= 100;  // y = y * 100
	y /= 2;  // y = y / 2
	y %= 3;  // y = y % 3
	y ^= 2;  // y = y ^ 2

	cout << (x > y);
	cout << (x < y);
	cout << (x >= y);
	cout << (x <= y);
	cout << (x == y);

	cout << (x < 5 && y < 10);  // and
	cout << (x < 5 && y < 5);  // or
	cout << !(x < 5);  // not

	return 0;

}

int Strings() {
	cout << "\n\n----------Strings----------\n";
	string greeting = "Hello";
	string name = "Gyungmin";

	cout << greeting + " " + name;
	cout << greeting.append(name);

	cout << "The length of the name string is " << name.length();
	cout << "The length of the name string is " << name.size();

	cout << name[0];
	name[0] = 'g';
	cout << name;

	string fullname;
	cout << "Type your full name >>> ";
	getline(cin, fullname);
	cout << "Your name is " << fullname;

	return 0;
}

int Math() {
	cout << "\n\n----------Math----------\n";
	cout << max(5, 10);
	cout << min(5, 10);
	cout << sqrt(64);  // 제곱근
	cout << round(4.2);  // 반올림
	cout << pow(2, 10); // 2^10

	return 0;
}

int Bool() {
	bool isCodingFun = true;
	cout << isCodingFun;  // 1
	isCodingFun = !(isCodingFun);
	cout << isCodingFun; // 0
	// true(1), false(0)

	return 0;
}

int main() {
	/*
	cout << Syntax();
	cout << Output();
	cout << NewLines();
	cout << Comment();
	cout << Variables();
	cout << DeclareManyVariables();
	cout << Constants();
	cout << UserInput();
	cout << SimpleCarculator();
	cout << DataTypes();
	cout << Operators();
	cout << Strings();
	cout << Math();
	cout << Bool();
	*/

	cout << "\n\n";
}
