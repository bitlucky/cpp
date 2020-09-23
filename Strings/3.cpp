// Check if any anagram of a string is pallindrome or not


1) Create a count array of alphabet 
size which is typically 256. Initialize all values of count array as 0.

2) Traverse the given string and increment count of every character.

3) Traverse the count array and if the count array has more than one odd values, 
return false. Otherwise return true.

 can form a palindrome */
bool canFormPalindrome(string str) 
{ 
    // Create a count array and initialize all 
    // values as 0 
    int count[NO_OF_CHARS] = { 0 }; 
  
    // For each character in input strings, 
    // increment count in the corresponding 
    // count array 
    for (int i = 0; str[i]; i++) 
        count[str[i]]++; 
  
    // Count odd occurring characters 
    int odd = 0; 
    for (int i = 0; i < NO_OF_CHARS; i++) { 
        if (count[i] & 1) 
            odd++; 
  
        if (odd > 1) 
            return false; 
    } 
  
    // Return true if odd count is 0 or 1, 
    return true; 
} 


