#include <stdio.h>

void convertData(char *name, float height, float weight) {
    name = "Phil";
    height = height * 12 * 2.54;
    weight = weight * .453592;
    printf("%s is %.1f cms tall adn weights %.2f kg\n", name, weight, height);
};

void changeNumberReference(int *number) { *number = 98765; }

void changeNumberValue(int number) { number = 98765; }
int main(int argc, const char *argv[]) {

    char *name = "Derek";
    convertData(name, 6.25, 179);

    int randomNum = 12345;

    // & gives you the addres of the variable
    printf("randNum location: %p\n", &randomNum);

    // star variable gives you a pointer to whaterver this address leads
    // you to
    int *addrRandomNum = &randomNum;

    // then you can change the inner value
    *addrRandomNum = 54321;

    printf("randNum location: %d\n", randomNum);

    // to give functions arguments, you can pass
    //
    // - a value (that is, a pointer), so it's inmmutable.
    // `changeNumber(&number)`
    //
    // - or a variable (a reference) and you can mutate the value within the
    // function
    // `changeNumber(number)`

    int number = 67890;

    changeNumberValue(number);
    printf("changeNumberValue: %d (unchanged)\n ", number);
    changeNumberReference(&number);
    printf("changeNumberReference: %d (changed!)\n", number);
}
