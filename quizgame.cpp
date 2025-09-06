#include <iostream>
using namespace std;

int main() {
    // ============================
    // Welcome Message
    // ============================
    cout << "===================================" << endl;
    cout << "       WELCOME TO C++ QUIZ GAME    " << endl;
    cout << "===================================" << endl;
    cout << "Answer the following questions (a/b/c/d):" << endl << endl;

    // ============================
    // Initialize score
    // ============================
    int score = 0;
    char answer;

    // ============================
    // Question 1
    // ============================
    cout << "1. Which of the following is the correct way to start a C++ program?" << endl;
    cout << "a) #include <stdio.h>\n";
    cout << "b) int main() {}\n";
    cout << "c) public static void main()\n";
    cout << "d) function main() {}\n";
    cout << "Your answer: ";
    cin >> answer;

    if(answer == 'b' || answer == 'B') {
        cout << "? Correct!" << endl;
        score++;
    } else {
        cout << "? Wrong! The correct answer is b) int main() {}" << endl;
    }
    cout << endl;

    // ============================
    // Question 2
    // ============================
    cout << "2. Which symbol is used for comments in C++?" << endl;
    cout << "a) //\n";
    cout << "b) <!-- -->\n";
    cout << "c) ##\n";
    cout << "d) **\n";
    cout << "Your answer: ";
    cin >> answer;

    if(answer == 'a' || answer == 'A') {
        cout << "? Correct!" << endl;
        score++;
    } else {
        cout << "? Wrong! The correct answer is a) //" << endl;
    }
    cout << endl;

    // ============================
    // Question 3
    // ============================
    cout << "3. Which of the following is used to output text in C++?" << endl;
    cout << "a) print()\n";
    cout << "b) cout\n";
    cout << "c) echo\n";
    cout << "d) System.out.println\n";
    cout << "Your answer: ";
    cin >> answer;

    if(answer == 'b' || answer == 'B') {
        cout << "? Correct!" << endl;
        score++;
    } else {
        cout << "? Wrong! The correct answer is b) cout" << endl;
    }
    cout << endl;

    // ============================
    // Question 4
    // ============================
    cout << "4. Which header file is required for using cout and cin?" << endl;
    cout << "a) <iostream>\n";
    cout << "b) <stdio.h>\n";
    cout << "c) <conio.h>\n";
    cout << "d) <stdlib.h>\n";
    cout << "Your answer: ";
    cin >> answer;

    if(answer == 'a' || answer == 'A') {
        cout << "? Correct!" << endl;
        score++;
    } else {
        cout << "? Wrong! The correct answer is a) <iostream>" << endl;
    }
    cout << endl;

    // ============================
    // Final Score
    // ============================
    cout << "===================================" << endl;
    cout << "           QUIZ FINISHED!          " << endl;
    cout << "===================================" << endl;
    cout << "Your total score is: " << score << "/4" << endl;

    // Optional message based on score
    if(score == 4) {
        cout << "?? Excellent! You know your C++ basics well!" << endl;
    } else if(score == 3) {
        cout << "?? Good job! You got 3 out of 4 correct." << endl;
    } else if(score == 2) {
        cout << "?? Not bad! You got 2 correct. Keep practicing!" << endl;
    } else {
        cout << "?? You need more practice. Try again!" << endl;
    }

    return 0;
}

