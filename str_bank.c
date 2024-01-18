int is_int(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}