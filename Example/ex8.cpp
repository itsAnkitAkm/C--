 int findZeroes(int arr[], int n, int m) {
        // code here

    // Left and right indexes of current window
    int wL = 0, wR = 0;
 
    // Left index and size of the widest window
    int bestL = 0, bestWindow = 0;
 
    // Count of zeroes in current window
    int zeroCount = 0;
 
    // While right boundary of current window doesn't cross
    // right end
    while (wR < n)
    {
        // If zero count of current window is less than m,
        // widen the window toward right
        if (zeroCount <= m)
        {
            if (arr[wR] == 0)
              zeroCount++;
            wR++;
        }
 
        // If zero count of current window is more than m,
        // reduce the window from left
        if (zeroCount > m)
        {
            if (arr[wL] == 0)
              zeroCount--;
            wL++;
        }
 
        // Update widest window if this window size is more
        if ((wR-wL > bestWindow) && (zeroCount<=m))
        {
            bestWindow = wR-wL;
            
        }
       
    }
     return bestWindow;
 }