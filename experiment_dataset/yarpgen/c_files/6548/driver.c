#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2034422758;
long long int var_2 = -1533769099577822175LL;
long long int var_3 = -6642896457317404685LL;
signed char var_4 = (signed char)-116;
unsigned long long int var_5 = 2478760259611491122ULL;
unsigned short var_6 = (unsigned short)64192;
short var_7 = (short)14935;
short var_9 = (short)-6256;
unsigned int var_10 = 1005578182U;
int zero = 0;
short var_16 = (short)13479;
signed char var_17 = (signed char)-71;
int var_18 = -158777262;
short var_19 = (short)-12837;
short var_20 = (short)20467;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
