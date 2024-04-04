#include <iostream>
#include <vector>
#include <string>

class Person {
private:
    std::string name;
    int powerLevel;

public:
    Person(std::string n, int pl) : name(n), powerLevel(pl) {}

    std::string getName() const {
        return name;
    }

    int getPowerLevel() const {
        return powerLevel;
    }

    void communicate() const {
        std::cout << name << " is communicating." << std::endl;
    }
};

class MaRSClub {
private:
    std::vector<Person> members;

public:
    void addMember(const Person& p) {
        members.push_back(p);
    }

    void communicate() const {
        for (const auto& member : members) {
            member.communicate();
        }
    }
};

int main() {
    MaRSClub club;

   
    club.addMember(Person("Arpit", 3));
    club.addMember(Person("Faraz", 2));
    club.addMember(Person("Ayush", 1));
    club.addMember(Person("Manas", 4));
    club.communicate();

    return 0;
}
