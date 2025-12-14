#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12379;
short var_2 = (short)792;
short var_3 = (short)15256;
short var_8 = (short)-12220;
short var_10 = (short)-13189;
int zero = 0;
short var_12 = (short)-2719;
short var_13 = (short)-25037;
short var_14 = (short)-25906;
short var_15 = (short)10372;
void init() {
}

void checksum() {
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
