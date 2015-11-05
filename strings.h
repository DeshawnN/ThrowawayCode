#ifndef STRINGS_H
#define STRINGS_H

string string1() {
	cout << "Please enter two different names\n";
	string name1;
	string name2;
	cin >> name1 >> name2;
	cout << "\n";
	if (name1 == name2) cout << "Those two names are the same\n";
	if (name1 < name2) cout << name1 << " is alphabetically before " << name2 << "\n";
	if (name1 > name2) cout << name1 << " is alphabetically after "  << name2 << "\n";
	return "";
}

string nameAndAge() {
	cout << "What is your first name?\n";
	string firstName;
	cin >> firstName;

	cout << "What is your last name?\n";
	string lastName;
	cin >> lastName;

	cout << "\nHello, " + firstName + " " + lastName + ", pleased to meet you\n\n";
	return "";
}

string detectRepeatedWords()
{
	int number_of_words = 0;
	string previous = " ";
	string current;
	cout << "Enter some text\n";
	cin >> current;
	

	while (cin >> current)
	{
		++number_of_words;
		if (previous == current)
			cout << "word number " << number_of_words
				 << " repeated: "  << current << "\n";
		previous = current;
	}
	return "";
}




#endif