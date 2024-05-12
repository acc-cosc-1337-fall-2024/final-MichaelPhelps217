//
#include "die.h"

int main() 
{
	Die die;
	srand(time(0));
    int result = die.roll();
    cout << "1D6 dice roll result: " << result << std::endl;
    return 0;
}