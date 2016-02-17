#include <iostream>
using namespace std;

int main()
{
	// Entering Opperands
	Beginning: // Enter First Variable
		double var1;
		double var2;
		cout << "Enter First Number: ";
		cin >> var1;
		goto Second;
	Loop: // Assigns 'var1' With the Result of Previous Opperation.
		double result;
		cout << "The Result Was: " << result << endl;;
		var1 = result;
	Second: // Enter Second variable.
		cout << "Enter Second Number: ";
		cin >> var2;
	Select: // Selects the Opperation to Execute.
		cout << endl;
		cout << "What Would You Like to Do?" << endl;
		cout << "+ Add" << endl;
		cout << "- Subtract" << endl;
		cout << "* Multiply" << endl;
		cout << "/ Divide" << endl;
		char decision;
		cin >> decision;
		system("cls");
	
	// Execute Calculations
	switch (decision)
	{
		case '+':
			cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
			result = (var1 + var2);
			break;
		case '-':
			cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
			result = (var1 - var2);
			break;
		case '*':
			cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
			result = (var1 * var2);
			break;
		case '/':
			if (var2)
			{ 
				cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
				result = (var1 / var2);
				break;
			} else {
				cout << "You can\'t devide by 0!" << endl;
				break;
			};
		default:
			cout << "You typed an incorrect character." << endl << endl;
			goto Select;
	}

	// Continue or exit program.
	char decision2;
	cout << endl;
	cout << "Do you want to: " << endl;
	cout << "  (C) Continue This Opperation" << endl;
	cout << "  (N) Begin a New Opperation" << endl;
	cout << "  (E) Exit the Propgram" << endl;
	cin >> decision2;
	system("cls");
	switch (decision2)
	{
		case 'C':
		case 'c':
			goto Loop;
		case 'N':
		case 'n':
			goto Beginning;
		default:
			cout << "Goodbye!" << endl;
			break;

	}
}