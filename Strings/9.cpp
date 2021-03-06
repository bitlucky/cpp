// Longest Pallindrome in a string 

Method 1: Brute Force.
Approach: The simple approach is to check each substring whether the substring is a 
palindrome or not. To do this first, run three nested loops, the outer two loops pick 
all substrings one by one by fixing the corner characters, 
the inner loop checks whether the picked substring is palindrome or not.

// Function to print a substring str[low..high] 
void printSubStr(string str, int low, int high) 
{ 
    for (int i = low; i <= high; ++i) 
        cout << str[i]; 
} 
  
// This function prints the 
// longest palindrome substring 
// It also returns the length 
// of the longest palindrome 
int longestPalSubstr(string str) 
{ 
    // get length of input string 
    int n = str.size(); 
  
    // All substrings of length 1 
    // are palindromes 
    int maxLength = 1, start = 0; 
  
    // Nested loop to mark start and end index 
    for (int i = 0; i < str.length(); i++) { 
        for (int j = i; j < str.length(); j++) { 
            int flag = 1; 
  
            // Check palindrome 
            for (int k = 0; k < (j - i + 1) / 2; k++) 
                if (str[i + k] != str[j - k]) 
                    flag = 0; 
  
            // Palindrome 
            if (flag && (j - i + 1) > maxLength) { 
                start = i; 
                maxLength = j - i + 1; 
            } 
        } 
    } 
  
    cout << "Longest palindrome substring is: "; 
    printSubStr(str, start, start + maxLength - 1); 
  
    // return length of LPS 
    return maxLength; 
} 
  
Method 2: Dynamic Programming.
Approach: The time complexity can be reduced by storing results of sub-problems. The idea is similar to this post.


Maintain a boolean table[n][n] that is filled in bottom up manner.
The value of table[i][j] is true, if the substring is palindrome, otherwise false.
To calculate table[i][j], check the value of table[i+1][j-1], if the value is true 
and str[i] is same as str[j], then we make table[i][j] true.
Otherwise, the value of table[i][j] is made false.


// This function prints the 
// longest palindrome substring 
// It also returns the length of 
// the longest palindrome 
int longestPalSubstr(string str) 
{ 
    // get length of input string 
    int n = str.size(); 
  
    // table[i][j] will be false if substring 
    // str[i..j] is not palindrome. 
    // Else table[i][j] will be true 
    bool table[n][n]; 
  
    memset(table, 0, sizeof(table)); 
  
    // All substrings of length 1 
    // are palindromes 
    int maxLength = 1; 
  
    for (int i = 0; i < n; ++i) 
        table[i][i] = true; 
  
    // check for sub-string of length 2. 
    int start = 0; 
    for (int i = 0; i < n - 1; ++i) { 
        if (str[i] == str[i + 1]) { 
            table[i][i + 1] = true; 
            start = i; 
            maxLength = 2; 
        } 
    } 
  
    // Check for lengths greater than 2. 
    // k is length of substring 
    for (int k = 3; k <= n; ++k) { 
        // Fix the starting index 
        for (int i = 0; i < n - k + 1; ++i) { 
            // Get the ending index of substring from 
            // starting index i and length k 
            int j = i + k - 1; 
  
            // checking for sub-string from ith index to 
            // jth index iff str[i+1] to str[j-1] is a 
            // palindrome 
            if (table[i + 1][j - 1] && str[i] == str[j]) { 
                table[i][j] = true; 
  
                if (k > maxLength) { 
                    start = i; 
                    maxLength = k; 
                } 
            } 
        } 
    } 
  
    cout << "Longest palindrome substring is: "; 
    printSubStr(str, start, start + maxLength - 1); 
  
    // return length of LPS 
    return maxLength; 
} 
