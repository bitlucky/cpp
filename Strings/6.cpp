//URLify a given string 

A simple solution is to 
create an auxiliary string and copy characters one by one. Whenever a space is encountered, 
place %20 in place of it.

A better solution to do in-place assuming that we have extra space in input string. 
We fist count number of spaces in input string. Using this count, we can find length of 
the modified (or result) string. 
After computing new length we fill the string in-place from end.


// Replaces spaces with %20 in-place and returns 
// new length of modified string. It returns -1 
// if modified string cannot be stored in str[] 
int replaceSpaces(char str[]) 
{ 
    // count spaces and find current length 
    int space_count = 0, i; 
    for (i = 0; str[i]; i++) 
        if (str[i] == ' ') 
            space_count++; 
  
    // Remove trailing spaces 
    while (str[i-1] == ' ') 
    { 
       space_count--; 
       i--; 
    } 
  
    // Find new length. 
    int new_length = i + space_count * 2 + 1; 
  
    // New length must be smaller than length 
    // of string provided. 
    if (new_length > MAX) 
        return -1; 
  
    // Start filling character from end 
    int index = new_length - 1; 
  
    // Fill string termination. 
    str[index--] = '\0'; 
  
    // Fill rest of the string from end 
    for (int j=i-1; j>=0; j--) 
    { 
        // inserts %20 in place of space 
        if (str[j] == ' ') 
        { 
            str[index] = '0'; 
            str[index - 1] = '2'; 
            str[index - 2] = '%'; 
            index = index - 3; 
        } 
        else
        { 
            str[index] = str[j]; 
            index--; 
        } 
    } 
  
    return new_length; 
} 



/ Java implementation of above approach 
class GFG 
{ 
    public static void main(String[] args)  
    { 
        // Instantiate the string 
        String str = "Mr John Smith   "; 
          
        // Trim the given string 
        str = str.trim(); 
          
        // Replace All space (unicode is \\s) to %20 
        str = str.replaceAll("\\s", "%20"); 
          
        // Display the result 
        System.out.println(str); 
    } 
} 
