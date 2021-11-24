#include "std_lib_facilities.h"
int main()
{
	cout<< "Enter the name of the person you want to write to:\n";
	string first_name;
	cin >> first_name;
	cout << "Enter the name of another friend:\n";
	string friend_name;		
	cin >> friend_name;
	cout << "Please enter an m if your friend is male and an f if your friend is female:\n";
	char friend_sex = 0;
		cin >> friend_sex;
		cout << "Please enter the age of the recipient:\n";
	int age;
	cin >> age;
	if (age <=0 || age >=110)
		simple_error("you are kidding");	
		cout << "Dear " << first_name<< ",\n" << "\n";
		cout << "How are you?\n" << "I am doing fine. I miss you so much.\n"<< 
	"Are you still working for the same company?\n"<< "Have you seen " << friend_name<<" lately?\n";	
	if (friend_sex == 'm')
		cout << "If you see " <<friend_name<< " please ask him to call me as soon as he can.\n";
	if (friend_sex == 'f')
		cout << "If you see " <<friend_name<< " please ask her to call me as soon as she can.\n";
		cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age < 12)
		cout << "Next year you'll be " << ++age <<".\n";
	if (age ==17)
		cout << "Next year you will be able to vote.\n";
	if (age >=70)
		cout << "I hope you are enjoying retirement.\n";
		cout <<" "<< "\n";	
		cout << "Yours sincerely\n";
		cout <<" "<< "\n";
		cout <<" "<< "\n";
		cout << "Laszlo\n";	

	return 0;
}
