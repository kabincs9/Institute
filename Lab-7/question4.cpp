#include <iostream>

class Academic {
public:
    std::string subject;
    void setSubject(const std::string& s) {
        subject = s;
    }
    void displaySubject() {
        std::cout << "Subject: " << subject << "\n";
    }
};

class Sports {
public:
    std::string event;
    void setEvent(const std::string& e) {
        event = e;
    }
    void displayEvent() {
        std::cout << "Event: " << event << "\n";
    }
};

class Result : public Academic, public Sports {
public:
    double score;
    void setScore(double s) {
        score = s;
    }
    void displayScore() {
        std::cout << "Score: " << score << "\n";
    }
};

int main() {
    Result r;
    r.setSubject("Math");
    r.setEvent("100m");
    r.setScore(90.5);

    r.displaySubject();
    r.displayEvent();
    r.displayScore();

    return 0;
}