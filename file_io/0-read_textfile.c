#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - This reads a text file and prints it to the POSIX stdo
 *
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it reads and prints
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t 

