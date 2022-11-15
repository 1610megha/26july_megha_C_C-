/*#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("C:\\newfile.txt","a");

    if(fp == NULL)
   {
      printf("Error");   
      //exit(1);             
   }
	printf("Enter any character: ");
    scanf("%c",&ch);

   /* You can also use fputc(ch, fp);*/
  /*  fprintf(fp,"%c",ch);
    fclose(fp);

   return 0;
}
*/


#include <stdio.h>
int main()
{
    char ch;

    /* Pointer for both the file*/
    FILE *fpr, *fpw;
    /* Opening file FILE1.C in “r” mode for reading */
    fpr = fopen("C:\\file1.txt", "r");

    /* Ensure FILE1.C opened successfully*/
    if (fpr == NULL)
    {
         puts("Input file cannot be opened");
    }

    /* Opening file FILE2.C in “w” mode for writing*/
    fpw= fopen("C:\\file2.txt", "w");

    /* Ensure FILE2.C opened successfully*/
    if (fpw == NULL)
    {
       puts("Output file cannot be opened");
    }

    /*Read & Write Logic*/
    while(1)
    {
        ch = fgetc(fpr);
        if (ch==EOF)
            break;
        else
            fputc(ch, fpw);
    }

    /* Closing both the files */
    fclose(fpr);
    fclose(fpw);

    return 0;
}
