// https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1

bool isRotated(string str1, string str2)
    {
        // to obtain : str2
        // exactly 2 places
        int n1 = str1.size();
        int n2 = str2.size();
        
        string clockwise = str1.substr(2) + str1.substr(0,2);
        string anti = str1.substr(n1-2) + str1.substr(0, n1-2);
        return (clockwise == str2 || anti == str2);
    }
