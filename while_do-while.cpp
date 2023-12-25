#include <iostream>
using namespace std;

int main()
{

    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }
    return 0;

            /*
                Loops can execute a block of code as long as a specified condition is reached.
                Loops are handy because they save time, reduce errors, and they make code more readable.

                *** C++ While Loop

                    The while loop loops through a block of code as long as a specified condition is true:


                **** The Do/While Loop

                    The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

                    *** The example below uses a do/while loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested: ***

                    int i = 0;
                    do {
                        cout << i << "\n";
                        i++;
                    }
                    while (i < 5);

                *** Do not forget to increase the variable used in the condition, otherwise the loop will    never end!


            */

}
