int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i ==  5)
			continue;
		printf("%d", i);
		i++;
	}
	return 0;
}

continue 在while循环中，当值=5时，会跳过后面的部分，循环变量无法得到调整.






int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d", i);

	}
	return 0;

}

continue在if循环中，当值=5时，会跳过打印部分,调到调整（i++）部分继续.
