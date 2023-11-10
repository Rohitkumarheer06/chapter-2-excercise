#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

string toLowerCase(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main() {
    vector<pair<string, string>> questions = {
        {"What is the capital of France?", "paris"},
    };

    string userAnswer;
    int score = 0;

    for (const auto& question : questions) {
        cout << question.first << endl;
        cout << "Answer: ";
        getline(cin, userAnswer);

        if (toLowerCase(userAnswer) == question.second) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong. The correct answer is " << question.second << "." << endl;
        }
    }

    cout << "Quiz finished! Your score: " << score << "/" << questions.size() << endl;

    return 0;
}
