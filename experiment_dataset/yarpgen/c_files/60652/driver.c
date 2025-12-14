#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31960;
unsigned int var_3 = 2276938169U;
unsigned int var_4 = 4185888018U;
unsigned int var_6 = 3081706564U;
unsigned int var_7 = 576063968U;
unsigned int var_9 = 3339166522U;
short var_10 = (short)4585;
int zero = 0;
unsigned char var_11 = (unsigned char)248;
short var_12 = (short)16787;
unsigned int var_13 = 2597464303U;
unsigned char var_14 = (unsigned char)12;
short var_15 = (short)8852;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
