#include <unistd.h>

int     main(int argc, char **argv)
{
	char arr[] = "abcdefghijklmnopqrstuvwxyz";
        char str[] = "ABCSEFGHIJKLMNOPQRSTUVWXYZ";
        int i = 0;
        int j = 0;
        int k = 0;
        if(argc == 2)
        {
                while(argv[1][j] != '\0')
                {
                        if((argv[1][j] >= 'a' && argv[1][j] <= 'z') || (argv[1][j] >= 'A' && argv[1][j] <= 'Z'))
                       {
                         while(arr[i] != '\0' && str[i] != '\n')
                        {
                                if(arr[i] == argv[1][j] || str[i] == argv[1][j])
                                {
                                        while(k <= i)
                                        {
                                                write(1, &argv[1][j], 1);
                                                k++;
                                        }
                                        k = 0;
                                        j++;
                                        i = 0;
                                }
                                else
                                        i++;
                        }
                       }
                       else
                       {
                          write(1, &argv[1][j], 1);
                          j++;
                       }
                }
        }
        write(1, "\n", 1);
}
