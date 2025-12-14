#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27842;
short var_2 = (short)-15365;
unsigned int var_3 = 2920574326U;
short var_5 = (short)21767;
unsigned int var_8 = 2856414393U;
unsigned short var_9 = (unsigned short)12927;
unsigned short var_13 = (unsigned short)56203;
int zero = 0;
unsigned short var_18 = (unsigned short)16562;
int var_19 = -1065807519;
unsigned int var_20 = 2974322289U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
