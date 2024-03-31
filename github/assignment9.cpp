#include <iostream>

class StringOperation {
private:
    std::string str;

public:
    StringOperation(std::string s) : str(s) {}

    // Function to find the length of the string
    int findLength() {
        int length = 0;
        for (char c : str) {
            length++;
        }
        return length;
    }

    // Function to find the reverse of the string
    std::string findReverse() {
        std::string reversedStr;
        for (int i = str.length() - 1; i >= 0; i--) {
            reversedStr += str[i];
        }
        return reversedStr;
    }

    // Function to find the concatenation of two strings
    std::string concatenate(std::string otherStr) {
        return str + otherStr;
    }

    // Function to compare two strings
    bool compare(std::string otherStr) {
        if (str.length() != otherStr.length())
            return false;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != otherStr[i])
                return false;
        }
        return true;
    }
};

int main() {
    std::string inputString1, inputString2;
    std::cout << "Enter the first string: ";
    std::cin >> inputString1;
    std::cout << "Enter the second string: ";
    std::cin >> inputString2;

    StringOperation strOp(inputString1);

    std::cout << "Length of the string: " << strOp.findLength() << std::endl;
    std::cout << "Reverse of the string: " << strOp.findReverse() << std::endl;
    std::cout << "Concatenation of the two strings: " << strOp.concatenate(inputString2) << std::endl;
    std::cout << "Comparison result of the two strings: " << (strOp.compare(inputString2) ? "Equal" : "Not Equal") << std::endl;

    return 0;
}
