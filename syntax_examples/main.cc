#include <iostream>

int main(int argc, char const *argv[])
{
    int age = 10;
    float weight = 12.4;
    char grade = 'a';
    std::string name = "Lana";
    double height = 5.2332;
    bool isAlive = true;
    const int LIGHT_SPEED = 299792458;

    /*
        +	Addition
        -	Subtraction
        *	Multiplication
        /	Division
        %	Modulo Operation (Remainder after division)
    */

    /*
        =	a = b;	a = b;
        +=	a += b;	a = a + b;
        -=	a -= b;	a = a - b;
        *=	a *= b;	a = a * b;
        /=	a /= b;	a = a / b;
        %=	a %= b;	a = a % b;
    */

    /*
         ==	Is Equal To	3 == 5 gives us false
         !=	Not Equal To	3 != 5 gives us true
         >	Greater Than	3 > 5 gives us false
         <	Less Than	3 < 5 gives us true
         >=	Greater Than or Equal To	3 >= 5 give us false
         <=	Less Than or Equal To	3 <= 5 gives us true
    */

    /*
        &&	expression1 && expression2	Logical AND.
        True only if all the operands are true.
        ||	expression1 || expression2	Logical OR.
        True if at least one of the operands is true.
        !	!expression	Logical NOT.
        True only if the operand is false.
    */

    /*
        &	Binary AND
        |	Binary OR
        ^	Binary XOR
        ~	Binary One's Complement
        <<	Binary Shift Left
        >>	Binary Shift Right
    */

    /*
         sizeof	returns the size of data type	sizeof(int); // 4
         ?: 	returns value based on the condition	string result = (5 > 0) ? "even" : "odd"; // "even"
         &	represents memory address of the operand	&num; // address of num
         .	accesses members of struct variables or class objects	s1.marks = 92;
         ->	used with pointers to access the class or struct variables	ptr->marks = 92;
         <<	prints the output value	cout << 5;
         >>	gets the input value	cin >> num;
    */

    std::cout << "Hello from C++" << std::endl;
    return 0;
}
