﻿#include <iostream> // This is the code for the header file library like inputs and objects
#include <list>

using namespace std; // Uses names and objects from the main library


// This is used to create the user's character

class Character {

public:
    string character_name = "name";
    string character_class = "class";
    int character_damage = 0;
    int character_hp = 0;
    int character_mana= 0;

};

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

    cout << "Welcome to the school system which contains simple string and maths";

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

} 

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

void Game_play() {

    string Class_choice;
    Character User_character;

    //////////////////PROLAGUE//////////////////

    cout << endl;
    cout << "'Hello Traveller from afar, we have found you lying on the ground and have taken you in. What is your name?'" << endl;
    cin >> User_character.character_name;

    string name = User_character.character_name;

    cout << endl;
    cout << "'Ahh welcome " << name << ", It seems that you had an item with you, Can you remember what you had?' (CHOOSE UR CLASS : WARRIER, ARCHER, MAGE)";
    cin >> Class_choice;

    if (Class_choice == "WARRIER") {
        cout << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "'Ofc, I remember you have this massive steel sword!'" << endl;
        cout << "The old man gives you the massive sword into your hand" << endl;

        User_character.character_class = "W";
        User_character.character_hp = 14;
        User_character.character_damage = 6;

    }
    else if (Class_choice == "ARCHER") {
        cout << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "'Ofc, I remember you have this fine looking wooden bow'" << endl;
        cout << "The old man gives you the wooden bow into your hand" << endl;

        User_character.character_class = "A";
        User_character.character_hp = 10;
        User_character.character_damage = 4;

    }
    else if (Class_choice == "MAGE") {
        cout << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "'Ofc, I remember you had this magical looking fire staff'" << endl;
        cout << "The old man gives you the staff into your hand" << endl;

        User_character.character_class = "M";
        User_character.character_hp = 8;
        User_character.character_damage = 8;
    }
    cout << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "'There is Danger ahead and we need you to save the world!, Please help us and Goodluck!'" << endl;
    cout << endl;
    cout << "You went off the bed and open the door to explore the new world ahead of you!" << endl;
    cout << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << endl;

    //////////////////CHAPTER 1//////////////////

    cout << "This is your main HUB place where you can do different stuff to help you do certain actions" << endl;
    cout << endl;

    // Main options

    bool Main_action_loop = true;

    int action_choice;

    while (Main_action_loop) {

        
        cout << "<What would you like to do for today?>" << endl;
        cout << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "1 - Info" << endl;
        cout << "2 - Training" << endl;
        cout << "3 - Inventory" << endl;
        cout << "4 - Travel" << endl; // Might need to add another option such as Adventure to explore and find out secret stuff as minigames
        cout << "5 - Quit" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << endl;
        cin >> action_choice;
        cout << endl;

        // This will give the user some basic info on your story
        if (action_choice == 1) {
            cout << endl;
            cout << "alright, lets check out your details." << endl;

            if (User_character.character_class == "M") {
                cout << "You are currently Playing as an MAGE " << endl;
            }
            else if (User_character.character_class == "W") {
                cout << "You are currently Playing as an WARRIER" << endl;
            }
            else if (User_character.character_class == "A") {
                cout << "You are currently Playing as an ARCHER" << endl;
            }
            cout << endl;
            cout << "You currently have: " << User_character.character_hp << " Health, and you can deal " << User_character.character_damage << " Damage :>}" << endl;
            cout << endl;

            cout << "Your current level is {LEVEL}" << endl;
            cout << endl;

            cout << "You have been playing for {TIMER}" << endl;
            cout << endl;

            cout << "You have killed {TOTAL_MOBS_KILLS}" << endl;
            cout << endl;

            cout << "You have unlocked {ACHIVEMENTS}" << endl;
            cout << endl;

            cout << "You have explored all regions? {PERCENTAGE}" << endl;
            cout << endl;

            cout << "You have killed all types of mobs? {PERCENTAGE}" << endl;
            cout << endl;

            cout << "You have gotten the legendary weapon? {TRUE OR FALSE}" << endl;
            cout << endl;

            cout << "You have gotten the legendary armor? {TRUE OR FALSE}" << endl;
            cout << endl;

            cout << "You have gotten the legendary BackPack? {TRUE OR FALSE}" << endl;
            cout << endl;
        }
        // This is where you can learn and train your skills
        else if (action_choice == 2) {
            cout << "Ahh yes, lets see your inventory" << endl;
        }
        // This allows you to manage and use ur items in battle
        else if (action_choice == 3) {

            list<string> Inventory = {"empty", "empty", "empty", "empty", "empty"};// the size of the users inventory system
           

            cout << "<Ahh yes, lets see your inventory>" << endl;
            cout << endl;
            cout << "-------Inventory Slots 0/5-------" << endl;
            for (string slot : Inventory) {
                cout << slot << endl;
            }
            cout << endl;
            cout << "---------------------------------" << endl;
            cout << endl;
        

        }
        // When the user is ready, they will need to explore the map and find out differnt parts
        else if (action_choice == 4) {
            cout << endl;
            cout << "This is the map" << endl;
            cout << endl;

            cout << "│---------------------Map of XP land---------------------│" << endl;
            cout << "│--------------------------------------------------------│" << endl;
            cout << "│########################################################│" << endl;
            cout << "│########################################################│" << endl;
            cout << "│########################################################│" << endl;
            cout << "│########################################################│" << endl;
            cout << "│########################################################│" << endl;
            cout << "│########################################################│" << endl;
            cout << "│########################################################│" << endl;
            cout << "│########################################################│" << endl;
            cout << "│########################################################│" << endl;
            cout << "│########################################################│" << endl;
            cout << "│--------------------------------------------------------│" << endl;
            cout << endl;


        }
        // Main options
        else if (action_choice == 5) {

            string last_choice;

            cout << "Are you sure you want to quit the game? (YES/NO)" << endl;

            if (last_choice == "YES") {
            }
            else {
                cout << "Sorry, you must have inputted wrong data, please try again" << endl;

            }
        }

    }

    


    
}

void XP_Adventure_Game() {
    string choice;

    cout << "Weclome to the Adventure game where you can make your own character and find hidden treasure to fight the boss!" << endl;

    // This is used for the main gameplay look

   


    // This is where the user can make the choice to play the game or not

    cout << "Would you like to play this game? (YES/NO)";

    cin >> choice;

    if (choice == "YES") {
        Game_play();

    }
    else {
        cout << "Needs fixing";
    }

}

int main() {
    int choice;

    bool Introduction_loop = true;

    while (Introduction_loop) {

        cout << "Welcome to the XP program where this contains lots of mini programs to explore different functions, Have fun!" << endl;

        cout << "What would you like to choose for today:" << endl;
        cout << "1 - School system " << endl;
        cout << "2 - XP Gacha" << endl;
        cout << "3 - Banking App " << endl;
        cout << "4 - XP retail game " << endl;
        cout << "5 - XP Adventure game " << endl;
        cin >> choice;

        // User is able to choose different options for the games to play
        if (choice == 1) {
            school_system();
            Introduction_loop = false;
        }
        else if (choice == 2) {
            Gacha();
            Introduction_loop = false;
        }
        else if (choice == 3) {
            Banking_app();
            Introduction_loop = false;
        }
        else if (choice == 4) {
            XP_Retail_Game();
            Introduction_loop = false;
        }
        else if (choice == 5) {
            XP_Adventure_Game();
            Introduction_loop = false;

        }
        else {
            cout << "Please input the correct value on screen" << endl;
        }

    }

    system("pause");

};

 





    