#include <iostream>
#include <string>

using namespace std;
// "Severance" TV Show Trivia 

// how do i create a list or dictionary of questions and answers?
// idk
// i can feel the inefficiency running through my veins
// ghelp



int main() {
    cout << "Welcome to the Severance Trivia! \n\n-------------------------------- \n\n";

    // Int Questions

    int answer = 0;
    int score = 0;
    cout << "Int Questions -------------------- \n\n";
    cout << "1. How many seasons of Severance are there as of 2025? (int) \n\n> ";
    cin >> answer;
    if (answer != 2) {
        cout << "\n\nIncorrect! The correct answer is 2. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

    cout << "You have: " << score << "/1 points\n\n";

    cout << "2. How many years after Season 1 did Season 2 come out? (int) \n\n> ";
    cin >> answer;
    if (answer != 3) {
        cout << "\n\nIncorrect! The correct answer is 3. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

    cout << "You have: " << score << "/2 points\n\n";

    cout << "3. What year did Season 1 of Severance come out? (int) \n\n> ";
    cin >> answer;
    if (answer != 2022) {
        cout << "\n\nIncorrect! The correct answer is 2022. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

    cout << "You have: " << score << "/3 points\n\n";

    cout << "4. What year did Season 2 of Severance come out? (int) \n\n> ";
    cin >> answer;
    if (answer != 2025) {
        cout << "\n\nIncorrect! The correct answer is 2025. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

    cout << "You have: " << score << "/4 points\n\n";

    // Float Questions
    float answerFloat;
    cout << "Float Questions ------------------ \n\n";
    cout << "5. Using <season>.<episode number>, which episode was it revealed that Cobel grandfathered the Severance Procedure? (float) \n\n> ";
    cin >> answerFloat;
    if (answerFloat != 2.8f) {
        cout << "\n\nIncorrect! The correct answer is 2.8. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

    cout << "You have: " << score << "/5 points\n\n";

    cout << "6. Using <season>.<episode number>, which episode was Helly introduced in? (float) \n\n> ";
    cin >> answerFloat;
    if (answerFloat != 1.1f) {
        cout << "\n\nIncorrect! The correct answer is 1.1. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

    cout << "You have: " << score << "/6 points\n\n";

    cout << "7. Using <season>.<episode number>, which episode did Mark try Reintegration? (float) \n\n> ";
    cin >> answerFloat;
    if (answerFloat != 2.3f) {
        cout << "\n\nIncorrect! The correct answer is 2.3. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

    cout << "You have: " << score << "/7 points\n\n";

    // String Questions

    cout << "String Questions ----------------- \n\n";
    cout << "8. What is the name of the company that created the severance procedure? (string) \n\n> ";
    string answerStr; // allowing for spaces in string input cause yes
    cin.ignore();
    getline(cin, answerStr);
    if (answerStr != "Lumon Industries") {
        cout << "\n\nIncorrect! The correct answer is Lumon Industries. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

    cout << "You have: " << score << "/8 points\n\n";

    cout << "9. How did Gemma Scout die? (string) \n\n> ";
    getline(cin, answerStr);
    if (answerStr != "She didn't") {
        cout << "\n\nIncorrect! The correct answer is: She didn't. \n\n";
            

    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

     cout << "You have: " << score << "/9 points\n\n";

    // Char Questions

    char answerChar;
    cout << "Character Questions -------------- \n\n";
    cout << "10. What is Mr Eagan\'s favorite breakfast? (char)" << endl
         << "A] Pancake batter with Bacon bits" << endl
         << "B] Waffles and Cheese" << endl
         << "C] Eggs and Ham" << endl
         << "D] 3 Raw eggs in milk." << endl << endl
         << "> ";
     cin >> answerChar;
     if (toupper(answerChar) != 'D') {
         cout << "\n\nIncorrect! The correct answer is D. \n\n";
         
     } else {
         cout << "\n\nCorrect! \n\n";
         score++;
     }
     cout << "You have: " << score << "/10 points\n\n";

    cout << "11. Which of these was NOT an episode title in both Season 1 and 2? (char)" << endl
         << "A] The Grim Barbarity of Optics and Design" << endl
         << "B] Sweet Alcohol" << endl
         << "C] The You You are" << endl
         << "D] What\'s for Dinner?" << endl << endl
         << "> ";
     cin >> answerChar;
     if (toupper(answerChar) != 'B') {
         cout << "\n\nIncorrect! The correct answer is B. \n\n";
         
     } else {
         cout << "\n\nCorrect! \n\n";
         score++;
     }

     cout << "You have: " << score << "/11 points\n\n";

    // Boolean Questions

    cout << "Boolean Questions ---------------- \n\n";
    cout << "12. True or False: The severance procedure is reversible? (boolean) \n\n> ";
    string answerBool;
    cin >> answerBool;
    answerBool[0] = toupper(answerBool[0]); // make first letter uppercase to avoid case sensitivity issues
    if (answerBool != "False") {
        cout << "\n\nIncorrect! The correct answer is False. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

    cout << "You have: " << score << "/12 points\n\n";

    cout << "13. True or False: In season 2, Is the break room is a place for relaxation and socialization? (boolean) \n\n> ";
    cin >> answerBool;
    answerBool[0] = toupper(answerBool[0]); 
    if (answerBool != "True") {
        cout << "\n\nIncorrect! The correct answer is True. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

     cout << "You have: " << score << "/13 points\n\n";

    cout << "14. True or False: Mark is the first person to undergo the severance procedure? (boolean) \n\n> ";
    cin >> answerBool;
    answerBool[0] = toupper(answerBool[0]);
    if (answerBool != "False") {
        cout << "\n\nIncorrect! The correct answer is False. \n\n";
        
    } else {
        cout << "\n\nCorrect! \n\n";
        score++;
    }

     cout << "You have: " << score << "/14 points\n\n";

     cout << "-------------------------------- \n\n";
     cout << "Your final score is: " << score << "/14 \n\n";
     cout << "Thanks for playing! \n\n";
    return 0;
}


/* Questions and Answers: 
How many seasons of Severance are there as of 2025?(int)
> 2

How many years after Season 1 did Season 2 come out?(int)
> 3

What year did Season 1 of Severance come out?(int)
> 2022

What year did Season 2 of Severance come out?(int)
> 2025

Using <season>.<episode number> , which episode was it revealed that Cobel grandfathered the Severance Procedure?(float)
> 2.8

Using <season>.<episode number> , which episode was Helly introduced in?(float)
> 1.1

Using <season>.<episode number> , which episode was Cobel fired in?(float)
> 2.8

What is the name of the company that created the severance procedure?  (string)
> Lumon Industries

How did Gemma Scout die?(string)
> She didn\'t.

What is Mr Eagan\'s favorite breakfast? (char)
A) Pancake batter with Bacon bits
B) Waffles and Cheese
C) Eggs and Ham
D) 3 Raw eggs in milk.

> D

Which of these was NOT an episode title in both Season 1 and 2?(char)
A) The Grim Barbarity of Optics and Design
B) Sweet Alcohol
C) The You You are
D) What\'s for Dinner?

> B

True or False: The severance procedure is reversible?(boolean)
> False

True or False: In season 1, The break room is a place for relaxation and socialization?(boolean)
> False

True or False: Mark is the first person to undergo the severance procedure? (boolean)
> True

*/
