#include "input.h"

int intscanf(char * text)
{
	while (TRUE)
	{
		printf("%s", text);
		const char txt_buf[10];
		char txt_buf2[10];
		int j = 0;
		scanf("%s", txt_buf);
		if (!strcmp(txt_buf, "0"))
		{
			return 0;
		}
		else
		{
			for (int i = 0; i < sizeof(txt_buf); ++i)
			{
				if (txt_buf[i] >= 48 && txt_buf[i] <= 57)
				{
					txt_buf2[j] = txt_buf[i];
					j++;
				}
			}
			if (atoi(txt_buf2) != 0)
			{
				num = atoi(txt_buf2);
				return;
			}
		}
	}
}