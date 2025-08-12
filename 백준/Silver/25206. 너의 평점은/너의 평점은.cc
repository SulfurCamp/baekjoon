#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    map<string, double> grade_map = {
        {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0},
        {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}
    };
    double total_credits = 0;
    double weighted_sum = 0;
    for (int i = 0; i < 20; ++i) {
        string subject, grade;
        double credit;
        cin >> subject >> credit >> grade;
        if (grade != "P") {
            total_credits += credit;
            weighted_sum += credit * grade_map[grade];
        }
    }
    cout << fixed << weighted_sum / total_credits << endl;
    return 0;
}
