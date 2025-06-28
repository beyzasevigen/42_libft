#include <stdio.h>

static int count_words(char const *s, char c)
{
    int counter;
    int i;

    counter = 0;
    i = 0;
    while (s[i]) // gdushfu    hd hdj jd
    {
        if (i != 0 && s[i] != c && s[i - 1] == c)
            counter++;
        else if (i == 0 && (s[0] != c))
            counter++;
        i++;
    }
    return counter;
}

int main()
{
    char *str = "ksjhf gv j         shgdf   ";
    printf("%d", count_words(str, ' '));
}