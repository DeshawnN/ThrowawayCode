#ifndef INTS_H
#define INTS_H

int calc() {
	cout << "Let's do some math\n\n";
	cout << "Type two numbers\n";
	int num1;
	int num2;
	cin >> num1 >> num2;
	cout << "Do you want to add, subtract, multiply or divide these numbers?\n\n";
	string choice;
	cin >> choice;
	if (choice == "add" || choice == "Add")
	{
		int result = num1 + num2;
		cout << "\n" << num1 << " + " << num2 << " = " << result;
	}
	if (choice == "subtract" || choice == "Subtract")
	{
		if (num1 > num2)
		{
			int result = num1 - num2;
			cout << "\n" << num1 << " - " << num2 << " = " << result;
		}
		else if (num1 < num2) 
		{
			int result = num2 - num1;
			cout << "\n" << num2 << " - " << num1 << " = " << result;
		}
	}
	if (choice == "multiply" || choice == "Multiply")
	{
		int result = num1 * num2;
		cout << "\n" << num1 << " * " << num2 << " = " << result;
	}
	if (choice == "divide" || choice == "Divide")
	{
		if (num1 > num2)
		{
			int result = num1 / num2;
			cout << "\n" << num1 << " / " << num2 << " = " << result << " remainder " << num1 % num2;
		}
		if (num1 < num2)
		{
			int result = num2 / num1;
			cout << "\n" << num2 << " / " << num1 << " = " << result << " remainder " << num2 % num1;
		}

		if (num1 == num2)
		{
			int result = 1;
			cout << "\n" << num1 << " / " << num2 << " = " << result;
		}

		if (num1 == 0 || num2 == 0 || num1 == 0 && num2 == 0)
		{
			cout << "You cannot divide by zero, try again.";
		}
	}

	return 0;
}

int fibonacci() {
	cout << "Input two numbers\n";
	int num1;
	int num2;
	cin >> num1 >> num2;
	int sum;
	int i = 0;
	while (i < 10)
	{
		if (i <= 9) {
		cout << num1 << ", ";
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		i++;
		}
		if (i == 10)
		{
			cout << num1 << "\n";
		}
	}
	return 0;
	
}
int fibonacci2(int num1, int num2) 
{
	int i = 0;
	int sum;
	while (i < 10)
	{
		if (i <= 9) {
			cout << num1 << ", ";
			sum = num1 + num2;
			num1 = num2;
			num2 = sum;
			i++;
		}
		if (i == 10)
		{
			cout << num1 << "\n\n";
		}
	}
	return 0;
}

int strlen() 
{
	std::string str;
	cout << "Type a string and I'll tell you the length\n";
	cin >> str;
	int strlen = str.length();
	cout << strlen;

	return 0;
}

int conversion()
{
	cout << "This program tests the conversion of types, such as bool, char, etc\n\n";
	cout << "Please type in a data type\n";
	string type1;
	cin >> type1;
	cout << "Okay, so type1 is set to " << type1 << "\n\n";
	
	cout << "Now, set a type for a second type\n";
	string type2;
	cin >> type2;
	cout << "And type2 is set to " << type2 << "\n\n";
	
	// Simplifies user input
	if (type1 == "bool" || type1 == "BOOL" || type1 == "Bool")
	{
		type1 = "bool";
	}
	else if (type1 == "char" || type1 == "CHAR" || type1 == "Char")
	{
		type1 = "char";
	}
	else if (type1 == "int" || type1 == "INT" || type1 == "Int")
	{
		type1 = "int";
	}
	else if (type1 == "double" || type1 == "DOUBLE" || type1 == "Double")
	{
		type1 = "double";
	}

	// Compares data types
	if (type1 == "bool" && type2 == "char" || type1 == "bool" && type2 == "int"   || type1 == "bool" && type2 == "double"||
	    type1 == "char" && type2 == "int"  || type1 == "char" && type2 == "double"||
	    type1 == "int"  && type2 == "double")
	{
		cout << "This is a safe conversion\n";
	}
	else if (type1 == "bool"   && type2 == "bool" || type1 == "char"   && type2 == "char" ||
		 type1 == "int"    && type2 == "int"  || type1 == "double" && type2 == "double")
	{
		cout << "This is a not a conversion\n";
	}
	else if (type1 == "double" && type2 == "int" || type1 == "double" && type2 == "char" || type1 == "double" && type2 == "bool"||
		 type1 == "int"	   && type2 == "char"|| type1 == "int"    && type2 == "bool" || 
		 type1 == "char"   && type2 == "bool" )
	{
		cout << "this is an unsafe conversion\n";
	}
	return 0;
}


#endif
