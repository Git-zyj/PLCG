#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6900;
short var_2 = (short)28831;
short var_3 = (short)-17102;
short var_4 = (short)3744;
short var_6 = (short)30486;
short var_17 = (short)-19652;
short var_18 = (short)-15862;
int zero = 0;
short var_20 = (short)-31676;
short var_21 = (short)-27435;
short var_22 = (short)1328;
short var_23 = (short)-12647;
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
