#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    //prompt for pyramid sixe
    int height = get_positive_int("Height: ");

    //to create pyramid
    for (int i = 0; i < height; i++)
    {
        //add space betweem hash " "
        for (int spaces = height - i; spaces > 1; spaces --)
        {
            printf(" ");
        }
        //add hash "#"
        for (int hashes = 0; hashes <= i; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }

}

//pyramid within restraints
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;
}