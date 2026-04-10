#include <cmath>
#include <iostream>
#include <map>
#include <string>

using namespace std;

double calculate_entropy(const string &text) {
    if (text.empty()) {
        return 0.0;
    }

    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    for (const auto &pair : freq) {
        double p = static_cast<double>(pair.second) / text.size();
        entropy -= p * log2(p);
    }
    return entropy;
}

double calculate_redundancy(string text, int alphabet_size = 26)  {
    if (text.empty()) {
        return 0.0;
    }

    // Đếm số ký tự khác nhau
    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    int k = freq.size();  // số ký tự unique trong chuỗi

    double H_real = calculate_entropy(text);
    double H_max = log2(k);  // entropy tối đa của bảng chữ cái kích thước k

    double redundancy = H_max - H_real;
    return redundancy;
}

int main() {
    string input;
    cout << "Enter a string of characters: ";
    getline(cin, input);

    double entropy = calculate_entropy(input);
    double redundancy = calculate_redundancy(input);

    cout << "Entropy: " << entropy << '\n';
    cout << "Redundancy: " << redundancy << '\n';
    return 0;
}
