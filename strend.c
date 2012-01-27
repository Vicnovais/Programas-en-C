int strend(char *s, char *t)
{
	int Result = 0;
	int s_length = 0;
	int t_length = 0;
	s_length = strlen(s);
	t_length = strlen(t);
	if(t_length <= s_length)
	{
		s += s_length - t_length;
		if(0 == strcmp(s, t))
		{
			Result = 1;
		}
	}
	return Result;
}