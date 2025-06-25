#include <iostream> // This is the code for the header file library like inputs and objects

using namespace std; // Uses names and objects from the main library

void school_system() {

    // These are the main values
    string school_name;
    string school_subject;
    int school_age;
    int first_value;
    int second_value;
    int num1;
    int num2;
    int num3;

    cout << "Welcome to the school system which allows you to input your name, subject, age and results + some math problems to see if ur smart";

    // Inputs your Name, Subject and Age

    cout << "what is your full name : " << endl;
    cin >> school_name;

    cout << "What is your favourite Subject : " << endl;
    cin >> school_subject;

    cout << "what is your age : " << endl;
    cin >> school_age;

    // Outputs your values

    cout << "Hello " << school_name << ", Your Favourite Subject is " << school_subject << ", Your age is " << school_age << endl;

    // Inputs 2 numbers

    cout << "Please input 2 numbers from your exams please ;D" << endl;

    cout << "What is your first number : " << endl;
    cin >> first_value;

    cout << "What is your second number : " << endl;
    cin >> second_value;

    // Outputs total marks and percentage

    const double Mark_Result = first_value + second_value;
    cout << "out of 200, you were able to get " << Mark_Result << endl;

    const double Value = Mark_Result / 200.00;
    const double percentage = Value * 100.0;
    cout << "percentage is " << percentage << "% out of 200 marks" << endl;


    // Inputs 3 values for math value

    cout << "Please input your fist value : ";
    cin >> num1;

    cout << "Please input your second value : ";
    cin >> num2;

    cout << "Please input your third value : ";
    cin >> num3;

    const int result1 = num1 - num2;
    const int result2 = result1 * num3;
    const int result3 = result1 + result2 + num1 + num2 + num3;

    cout << "result is " << result3;

} // First Program

void Gacha() {
    cout << "Welcome to the gacha game where you can grind xp chips and use them to pull for your fav characters!";
}

void Banking_app() {
    cout << "welcome to the banking app where you can make ur own XP banking system to manage ur money and send to people";

}

void XP_Retail_Game() {
    string NightXP;
    cout << "welcome to the Retail game where you have to manage your shop and trying to quit as your goal, make havok, dont get depressed and lose wages ;D";
}



// Version 1
int main() {

    int choice;

    bool Program1 = true;

    while (Program1) {

        cout << "Welcome to the XP program where this contains lots of mini programs to explore different functions, Have fun!" << endl;

        cout << "What would you like to choose for today:" << endl;
        cout << "1 - School system " << endl;
        cout << "2 - XP Gacha" << endl;
        cout << "3 - Banking App " << endl;
        cout << "4 - XP retail game " << endl;
        cin >> choice;

        if (choice == 1)
            school_system();

        else if (choice == 2)
            Gacha();

        else if (choice == 3)
            Banking_app();

        else if (choice == 4)
            XP_Retail_Game();
        else
            cout << "Please input the correct value on screen" << endl;

        return 0;
    }


}