#include <stdio.h>
#include <string.h>

int compression(char *s)
{
    if(s == NULL)
    {
        return 1;
    }

    while (*s > 'z' || *s < 'a')
    {
        printf("Input Error");
    }
    
    int length_s = strlen(s);
    char Temp[length_s];
    int Temp_Index = 0;
    
    for(int i = 0,Count = 1; i < length_s;i++)
    {
        if(s[i] == s[i+1])
        {
            Count += 1;
        }
        if(s[i] != s[i+1])
        {
            Temp[Temp_Index++] = s[i] - 32;
            Temp[Temp_Index++] = Count + '0';
            Count = 1;
        }
    }
    Temp[Temp_Index] = '\0';
    printf("%s\n",Temp);
    printf("%s\n",s);
    if(length_s == strlen(Temp))
    {
        printf("Strings lengths are matching :) \n");
        return 1;
    }

    printf(" Strings lengths are NOT matching :( \n");
return 0;
}

int main ()
{
    char *s = "aabbcc";
    compression(s);
    return 0;
}
