//version subscripting
int strcmp(char *s, char *t) {
	int i;
	for (i = 0; s[i] == t[i]; i++) 
		if (s[i] == '\0')
			return 0; 
	return s[i] - t[i];
}

//version punteros
int strcmp(char *s, char *t) {
	for ( ; *s == *t; s++, t++) 
		if (*s == '\0')
			return 0; 
	return *s - *t;
}

//strncmp
int strncmp(char* s1, char* s2, int n)
{
    while(n--)
        if(*s1++ != *s2++)
            return *(s1 - 1) - *(s2 - 1);
    return 0;
}

