// File handling
// file types: text file and binary file

// To use this program type: Sample_File_Pointer.txt

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp; // file pointer

    char filename[100], ch;
    printf("Enter the filename to open: "); // taking the file name from user input
    scanf("\n%s", filename);                // it will be saved to filename

    // Open file: read mode(r), write mode(w), append mode(a), r+, w+, a+
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        return 0;
    }

    // read contents from the file
    ch = fgetc(fp);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);
    return 0;
}

/*
-A file can be anything from a disk file to a terminal or a printer
-A file is associated with a stream by performing an open operation and
is disassociated from a stream by a close operation
-All files are automatically closed when the program, using them, terminates,
normally by main() returning to the operating system or by a call to exit()
-Files are not closed when a program crashes
*/

// Text file
// A sequence of character which can be organized into lines terminated by a newline character.

// Binary file
// A sequence of bytes with one-to-one correspondence to those in the external device, that is there are no character translations.

// File pointer
// Points to each and every character of a file

// fopen() - creates a new file or opens an existing file
// fclose()- closes a file which has been opened
// getc() - reads a character from a file
// putc() - writes a character from a file
// fprintf() - writes a set of data values to a file
// fscanf() - reads a set of data values from a file
// getw() - reads an integer from a file
// putw() - writes an integer to a file
// fseek() - sets the position to a desired point in the file
// ftell() - gives the current position in the file(bytes)
// rewind() - set the position to the beginning of the file
// feof() - when a file is opened for binary input, an integer value equal to the EOF(End Of File) may be read.