#include <iostream>
#include <string>

using namespace std;

string compressString(string s) {
    string compressed;
    int count = 1;

    // Traverse the input string
    for (int i = 0; i < s.length(); ++i) {
        // If current character is same as the next one, increment count
        if (s[i] == s[i + 1]) {
            ++count;
        } else {
            // If next character is different or end of string is reached,
            // add character and count to the compressed string
            compressed += s[i];
            compressed += to_string(count);
            count = 1; // Reset count for the next character
        }
    }

    return compressed;
}

int main() {
    string s = "aaabbccd";
    cout << "Original string: " << s << endl;
    cout << "Compressed string: ";

    // Call function to compress the string and print the result
    cout << compressString(s) << endl;

    return 0;
}
