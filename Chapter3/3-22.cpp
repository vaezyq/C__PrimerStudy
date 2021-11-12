//
// Created by 22126 on 2021/11/12.
//

#include <iostream>
#include <vector>


using namespace std;

int main() {
    vector<string> text;
    string line;
    while (getline(cin, line)) {
        text.push_back(line);
    }

    for (auto it = text.begin(); it != text.end(); ++it) {
        for (auto it2 = (*it).begin(); it2 != (*it).end(); ++it2) {
            *it2 = toupper(*it2);
        }
    }
    return 0;

}
















