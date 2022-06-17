#include <stdio.h>
#include <stdbool.h>

// Compares two string arrays
bool compareStrArray(char strArr1[],char strArr2[], int length){
    for (int i = 0; i < length; i++)
    {
        if (strArr1[i] != strArr2[i])
        {
           return false; 
        }
    }
    
    return true;
}

bool isAnagram(char * s, char * t){
    int length_of_s = string_length(s);
    char letters_in_s[length_of_s];
    char s_arr[length_of_s];
    for (int i = 0; i < length_of_s; i++)
    {
        s_arr[i] = *(s+i);
    }

    int length_of_t = string_length(t);
    char letters_in_t[length_of_t];
    char t_arr[length_of_t];
    for (int i = 0; i < length_of_t; i++)
    {
        t_arr[i] = *(t+i);
    }

    if(length_of_s != length_of_t){
        return false;
    }    

    if(compareStrArray(s_arr, t_arr, length_of_s) == true){
        return true;
    };

    sort(s_arr, length_of_s);
    sort(t_arr, length_of_t);

    return compareStrArray(s_arr, t_arr, length_of_s);
}