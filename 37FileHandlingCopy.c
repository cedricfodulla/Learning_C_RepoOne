// Copying contents from one file to another

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("Sample_File_Pointer.txt", "r");
    fp2 = fopen("Sample_File_Pointer2.txt", "w");
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

// Setting current file pointer position

//    Origin          File Location
// SEEK_SET or 0 - Beginning of file
// SEEK_CUR or 1 - Current file pointer position
// SEEK_END or 2 - End of file