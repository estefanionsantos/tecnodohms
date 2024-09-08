#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void drawHangman(int wrongGuesses, const vector<char>& wordProgress) {
    clearScreen();
    string hangmanStages[] = {
        "  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========\n"
    };

    cout << hangmanStages[wrongGuesses] << "\n";
    cout << "Palavra: ";
    for (char c : wordProgress) {
        cout << c << " ";
    }
    cout << "\n\n";
}

string getRandomWord() {
    vector<string> wordList = {
        "hulk", "thor", "wakanda", "ironman", 
        "falcao", "viuvanegra", "vespa", "superman",
        "panteranegra", "mulhermaravilha", 
        "batman", "arqueiro", "captaoamerica"
    };

    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % wordList.size();
    return wordList[randomIndex];
}

void playHangman() {
    string word = getRandomWord();
    int wordLength = word.length();
    vector<char> wordProgress(wordLength, '_');
    int wrongGuesses = 0;
    int maxGuesses = 6;
    vector<char> guessedLetters;

    while (wrongGuesses < maxGuesses) {
        drawHangman(wrongGuesses, wordProgress);

        char input;
        cout << "Digite uma letra: ";
        cin >> input;

        input = tolower(input);

        if (!isalpha(input)) {
            cout << "Por favor, insira uma letra válida.\n";
            continue;
        }

        if (find(guessedLetters.begin(), guessedLetters.end(), input) != guessedLetters.end()) {
            cout << "Você já adivinhou essa letra. Tente outra.\n";
            continue;
        }

        guessedLetters.push_back(input);

        bool found = false;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == input) {
                wordProgress[i] = input;
                found = true;
            }
        }

        if (!found) {
            wrongGuesses++;
        }

        if (find(wordProgress.begin(), wordProgress.end(), '_') == wordProgress.end()) {
            drawHangman(wrongGuesses, wordProgress);
            cout << "Parabéns! Você adivinhou a palavra: " << word << "\n";
            return;
        }
    }

    drawHangman(wrongGuesses, wordProgress);
    cout << "Você perdeu! A palavra era: " << word << "\n";
}

int main() {
    playHangman();
    return 0;
}

