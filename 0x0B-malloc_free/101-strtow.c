#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(const char *str)
{
    int i, count = 0, len = strlen(str);
    int in_word = 0;

    for (i = 0; i < len; i++) {
        if (str[i] != ' ') {
            if (!in_word) {
                in_word = 1;
                count++;
            }
        } else {
            in_word = 0;
        }
    }

    return count;
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, count, len, word_len;

    if (str == NULL || str[0] == '\0')
        return NULL;

    count = count_words(str);

    if (count == 0)
        return NULL;

    words = malloc(sizeof(char *) * (count + 1));
    if (words == NULL)
        return NULL;

    len = strlen(str);
    for (i = 0, j = 0; i < count; i++) {
        while (str[j] == ' ')
            j++;

        word_len = 0;
        for (k = j; k < len && str[k] != ' '; k++)
            word_len++;

        words[i] = malloc(sizeof(char) * (word_len + 1));
        if (words[i] == NULL) {
            for (k = 0; k < i; k++)
                free(words[k]);
            free(words);
            return NULL;
        }

        strncpy(words[i], str + j, word_len);
        words[i][word_len] = '\0';
        j += word_len;
    }

    words[i] = NULL;

    return words;
}
