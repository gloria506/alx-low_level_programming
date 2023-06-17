#include "main.h"

/**
  * create_file - the  Entry point
  * Description - 'A function that creates a file'
  * @filename:this is the  pointer to the name of file to be created
  * @text_content: the pointer to the string to write to the file
  * Return: this shoud return -1 if the function fails, and 1 if otherwise
  */

int create_file(const char *filename, char *text_content)
{
	int op, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(op, text_content, len);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
