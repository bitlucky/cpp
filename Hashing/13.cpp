Method 1 (Simple : O(n3)): We can consider all substrings one by one and check for each substring 
whether it contains all unique characters or not. There will be n*(n+1)/2 substrings. Whether a 
substring contains all unique characters or not can be checked in linear time by scanning it from 
left to right and keeping a map of visited characters. Time complexity of this solution would be 
O(n^3).

// This functionr eturns true if all characters in str[i..j] 
// are distinct, otherwise returns false 
bool areDistinct(string str, int i, int j) 
{ 
  
    // Note : Default values in visited are false 
    vector<bool> visited(26); 
  
    for (int k = i; k <= j; k++) { 
        if (visited[str[k] - 'a'] == true) 
            return false; 
        visited[str[k] - 'a'] = true; 
    } 
    return true; 
} 
  
// Returns length of the longest substring 
// with all distinct characters. 
int longestUniqueSubsttr(string str) 
{ 
    int n = str.size(); 
    int res = 0; // result 
    for (int i = 0; i < n; i++) 
        for (int j = i; j < n; j++) 
            if (areDistinct(str, i, j)) 
                res = max(res, j - i + 1); 
    return res; 
} 


Method 2 (Better : O(n2)) The idea is to use window sliding. Whenever we see repitition, 
we remove the pervious occurrance and slide the window.

int longestUniqueSubsttr(string str) 
{ 
    int n = str.size(); 
    int res = 0; // result 
  
    for (int i = 0; i < n; i++) { 
          
        // Note : Default values in visited are false 
        vector<bool> visited(256);    
  
        for (int j = i; j < n; j++) { 
  
            // If current character is visited 
            // Break the loop 
            if (visited[str[j]] == true) 
                break; 
  
            // Else update the result if 
            // this window is larger, and mark 
            // current character as visited. 
            else { 
                res = max(res, j - i + 1); 
                visited[str[j]] = true; 
            } 
        } 
  
        // Remove the first character of previous 
        // window 
        visited[str[i]] = false; 
    } 
    return res; 
} 

