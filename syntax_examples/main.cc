#include <iostream>

void greet();

int main(int argc, char const *argv[])
{
    int age = 10;
    float weight = 12.4;
    char grade = 'a';
    std::string name = "Lana";
    double height = 5.2332;
    bool isAlive = true;
    const int LIGHT_SPEED = 299792458;
    float num, average, sum = 0.0;
    int i, n;

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

    for (size_t i = 0; i < 5; i++)
    {
        printf("Hello");
    }

    do
    {
        printf("Nothing");

    } while (false);

    while (false)
    {
        printf("None");
        break;
        continue;
    }

    switch (int x = 12)
    {
    case 10:
        printf("its 10");
        break;

    case 12:
        printf("its 12");
        break;

    default:
        printf("Do not care");
        break;
    }

    for (i = 1; i <= n; ++i)
    {
        std::cout << "Enter n" << i << ": ";
        if (num < 0.0)
        {
            // Control of the program move to jump:
            goto jump;
        }
        sum += num;
    }

jump:
    average = sum / (i - 1);
    std::cout << "\nAverage = " << average;

    std::cout << "Hello from C++" << std::endl;

    greet();

    return 0;
}

// function declaration
void greet()
{
    std::cout << "Hello World \n";
}