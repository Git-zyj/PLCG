#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -960210270;
int var_1 = -1434387294;
unsigned int var_2 = 1566656629U;
unsigned int var_3 = 1583770829U;
unsigned int var_4 = 1966045305U;
unsigned int var_5 = 1552349546U;
unsigned int var_6 = 852984240U;
unsigned int var_7 = 2078556375U;
unsigned int var_8 = 1383269161U;
int var_9 = 805053637;
unsigned int var_12 = 2993769655U;
int var_13 = 1401548900;
int var_14 = -818623320;
unsigned int var_16 = 3186321001U;
unsigned int var_17 = 2146289461U;
unsigned int var_19 = 3595366458U;
int zero = 0;
unsigned int var_20 = 3229611094U;
int var_21 = -1258202495;
int var_22 = -1590218350;
int var_23 = -547826023;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
