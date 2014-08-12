char *strrchr (char *s, char c)
{
  char *r = 0;
  do {
    if (*s == c)
      r = (char*) s;
  } while (*s++);
  return (r);
}