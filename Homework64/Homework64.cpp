#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//bool compareByLength(const string& str1, const string& str2) {
//    return str1.length() < str2.length();
//}
//
//int main() {
//    vector<string> vec = { "apple", "banana", "orange", "kiwi", "pineapple" };
//
//    cout << "Before sorting:" << endl;
//    for (const auto& str : vec) {
//        cout << str << " ";
//    }
//    cout << endl;
//
//    sort(vec.begin(), vec.end(), compareByLength);
//
//    cout << "After sorting by length:" << endl;
//    for (const auto& str : vec) {
//        std::cout << str << " ";
//    }
//    cout << endl;
//}
//

class CompareByLength {
public:
    bool operator()(const string& str1, const string& str2) const {
        return str1.length() < str2.length();
    }
};

int main() {
    vector<string> vec = { "apple", "banana", "orange", "kiwi", "pineapple" };

    cout << "Before sorting:" << endl;
    for (const auto& str : vec) {
        cout << str << " ";
    }
    cout << endl;

    sort(vec.begin(), vec.end(), CompareByLength());

    cout << "After sorting by length:" << endl;
    for (const auto& str : vec) {
        cout << str << " ";
    }
    cout << endl;
}