/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, l, word_count, word_len;

    if (str == NULL || str[0] == '\0')
        return NULL;

    for (i = 0, word_count = 0; str[i]; i++)
        if ((str[i] != ' ' && str[i + 1] == ' ') || (str[i] != ' ' && str[i + 1] == '\0'))
            word_count++;

    if (word_count == 0)
        return NULL;

    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return NULL;

    for (i = 0, j = 0; i < word_count; i++)
    {
        while (str[j] == ' ')
            j++;

        for (k = j, word_len = 0; str[k] != ' ' && str[k]; k++)
            word_len++;

        words[i] = malloc(sizeof(char) * (word_len + 1));
        if (words[i] == NULL)
        {
            for (k = 0; k < i; k++)
                free(words[k]);
            free(words);
            return NULL;
        }

        for (k = j, l = 0; k < j + word_len; k++, l++)
            words[i][l] = str[k];
        words[i][l] = '\0';
        j += word_len;
    }

    words[i] = NULL;

    return words;
}
