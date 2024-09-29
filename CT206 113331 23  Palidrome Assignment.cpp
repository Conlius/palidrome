 #include <iostream>
 using namespace std;
 int main() 
 {
 int num, originalNum, remainder, reversedNum = 0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
 // Reverse the number
 while (num != 0) {
        remainder = num % 10;  //always the last digit of a no.
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;       //quotient
    }
 // Check if the original number is equal to the reversed number
 if (originalNum == reversedNum) {
        cout << " is a palindrome." << endl;
    } 
    
 else {
        cout << " is not a palindrome." << endl;}
 return 0;
 }