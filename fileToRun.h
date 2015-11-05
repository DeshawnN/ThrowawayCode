#ifndef FILETORUN_H
#define FILETORUN_H

int fileToRun() 
{
	cout << "Which file do you want to run?\n";
	string fileToRun;
	cin >> fileToRun;

	if (fileToRun == "string1") string1();
	if (fileToRun == "nameAndAge") nameAndAge();
	if (fileToRun == "calculator" || fileToRun == "Calculator" || fileToRun == "calc" || fileToRun == "Calc") calc();
	if (fileToRun == "fib") fibonacci();
	if (fileToRun == "strlen") strlen();
	if (fileToRun == "conversion") conversion();
	return 0;
}
#endif

