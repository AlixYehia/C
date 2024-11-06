#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <MyLibrary.h>

int main()
{
    int current_selection = 0;
    int max_length;
    char *name;
    int i;
    char ch;

    printf("Enter the maximum length for the name: ");
    scanf("%d", &max_length);
    clrscr();

    name = (char *)malloc((max_length + 1) * sizeof(char)); /// Extra space for null terminator

    // Initialize name with spaces and set last character to null terminator
    for (i = 0; i < max_length; i++)
    {
        name[i] = ' ';
    }
    name[max_length] = '\0'; // Null terminate the string

    textattr(0x47);
    gotoxy(10, 10);

    printf("%s", name);
    gotoxy(10, 10);

    ch = 0;

    while (ch != 13 && ch != 27) // Continue until Enter (13) or Esc (27) is pressed
    {
        ch = getch();

        switch (ch)
        {
            case 77: /// Right arrow key
                if (current_selection < max_length)
                {
                    current_selection++;
                }
                break;

            case 75: /// Left arrow key
                if (current_selection > 0)
                {
                    current_selection--;
                }
                break;

            case 83: /// Delete key
                if (current_selection < max_length)
                {
                    // Shift characters to the left starting from current_selection
                    for (i = current_selection; i < max_length - 1; i++)
                    {
                        name[i] = name[i + 1]; // Shift left
                    }
                    name[max_length - 1] = ' '; // Clear last character
                    name[max_length] = '\0'; // Ensure null termination

                    gotoxy(10, 10);
                    printf("%s", name); // Print updated string
                }
                break;

            case 8: /// Backspace key
                if (current_selection > 0)
                {
                    current_selection--; // Move cursor left
                    // Shift characters to the left starting from current_selection
                    for (i = current_selection; i < max_length - 1; i++)
                    {
                        name[i] = name[i + 1]; // Shift left
                    }
                    name[max_length - 1] = ' '; // Clear last character
                    name[max_length] = '\0'; // Ensure null termination

                    // Clear the line and reprint the updated string
                    gotoxy(10, 10);
                    textattr(0x47);
                    for (i = 0; i < max_length; i++)
                    {
                        printf(" "); // Clear existing characters
                    }

                    gotoxy(10, 10);
                    printf("%s", name); // Print updated string
                }
                break;

            case 71: /// Home key
                current_selection = 0;
                break;

            case 79: /// End key
                current_selection = max_length - 1; // Set to last character position
                break;

            default:
                if (ch >= 32 && ch <= 126 && current_selection < max_length) // Printable ASCII characters
                {
                    name[current_selection] = ch;
                    gotoxy(10 + current_selection, 10);
                    textattr(0x47);
                    printf("%c", ch);
                    current_selection++;
                }
        }

        // Update cursor position based on current_selection
        gotoxy(10 + current_selection, 10);
    }

    gotoxy(10, 15);
    if (ch == 13) /// Enter
    {
        textattr(0x07);
        printf("%s", name);
    }

    free(name);
    getch();
    return 0;
}
