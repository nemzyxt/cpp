// Author : Nemuel Wainaina
// Sample Multiplayer Guessing Game using OOP paradigm, have fun ...

#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>

using namespace std;

class Session {
    private:
    char* sessionName;

    public:
    int numberOfRounds = 0;
    int numberOfPlayers = 0;
    Session() = default;
    Session(char* name, int num);
    void init();
    int sessionNumber();
};

Session::Session(char* name, int num) {
    this->sessionName = name;
    this->numberOfPlayers = num;
}

// retrieve last session number and increment by 1
int Session::sessionNumber() {
    FILE* fp = fopen("track.txt", "r");
    if (fp == NULL) {
        cout<<"[!] An error occurred . Terminating game ..."<<endl;
        exit(0);
    }
    int lastSession;
    fscanf(fp, "%d", &lastSession);
    return lastSession + 1;
}


class Round : public Session {
    private:
    int answer;
    int playerNumber;
    int roundNumber = 0;

    public:
    void init(int);
    void setup(Session);
    int getAnswer();
    int getRoundNumber();
    friend class Player;
};

// set up number of players
void Round::init(int num) {
    this->playerNumber = num;
} 

// generate and store the random number in a variable for reference as well as initialize players
void Round::setup(Session s) {
    this->roundNumber += 1;
    // cout<<"Updated LOL"<<endl;

    srand((unsigned) time(NULL));
    this->answer = 1 + (rand() % 100);
}

// return the value of the randomly generated number
int Round::getAnswer() {
    return this->answer;
}

// return the current round number
int Round::getRoundNumber() {
    return this->roundNumber;
}

class Player {
    private:
    int totalPoints = 0;

    public:
    void addPoints(int);
    bool isCorrect(Round, int);
    int getTotalPoints();
};

// return the absolute value of the difference between player's guess and the correct number
int diffCalc(int guess, int correct) {
    return abs(correct - guess);
}

// return number of points to award to the player based on the game rules
int awardPoints(int guess, int correct) {
    int a = guess, b = correct;

    // if guess is correct -> award 10 points
    if (a == b) {
        return 10;
    }

    // other cases ...
    if (diffCalc(a, b) <= 3) {
        return 7;
    } else if (diffCalc(a, b) <= 5) {
        return 5;
    } else if (diffCalc(a, b) <= 10) {
        return 2;
    } else {
        return 0;
    }
}

// evaluate player's guess and award points accordingly
bool Player::isCorrect(Round r, int i) {
    cout<<"[+] Player "<<i + 1<<" : ";
    int g;
    cin>>g;

    int points = awardPoints(g, r.answer);
    this->totalPoints += points;

    if (points == 10) {
        return true;
    }
    else {
        return false;
    }

}

// return the total points of the player by the end of the round
int Player::getTotalPoints() {
    return this->totalPoints;
}

// generate filename following the file naming rules
char* generateFName(Session s) {
    static char fName[12];
    string tmpFName = "score" + to_string(s.sessionNumber()) + ".txt";
    for(int i = 0; i < tmpFName.size(); i++) {
        fName[i] = tmpFName[i];
    }
    return fName;
}

int main() {
    char* name;
    int num;
    cout<<"======================================="<<endl;
    cout<<"\t\tWELCOME"<<endl;
    cout<<"======================================="<<endl;
    cout<<"[+] Assign a name to the Session : ";
    scanf("%s", &name);
    cout<<"[+] Enter the number of players : ";
    cin>>num;
    Session s(name, num);

    Round r;
    r.init(num);
    Player *players = new Player[num];

    startRound:
    r.setup(s);
    cout<<"\n\tROUND "<<r.getRoundNumber()<<" : ";
    cout<<"\nEnter your Guesses : "<<endl;
    for (int i = 0; i < num; i++) {
        if (players[i].isCorrect(r, i)) {
            break;
        }
    }
    cout<<"[+] The Random Number is : "<<r.getAnswer()<<endl;

    // testing purposes ...
    cout<<"\nTotal Points Per Player so far : "<<endl;
    for (int i = 0; i < num; i++) {
        cout<<"Player "<<i + 1<<" : "<<players[i].getTotalPoints()<<endl;
    }

    cout<<"Would you like to have another round ? (y/n) : ";
    char response;
    cin>>response;
    if (response == 'y' || response == 'Y') {
        goto startRound;
    }

    // save session scores to a file
    char *fileName = generateFName(s);
    FILE* fp = fopen(fileName, "w");
    // fprintf(fp, "Session Name :: %s\n", name);
    for (int i = 0; i < num; i++) {
        fprintf(fp, "Player %d :: %d\n", i + 1, players[i].getTotalPoints());
    }
    // update number in track.txt; increment the value by 1
    int current = s.sessionNumber();
    fp = fopen("track.txt", "w");
    fprintf(fp, "%d", current + 1);
    fclose(fp);

    return 0;
}