#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)12;
_Bool var_2 = (_Bool)1;
short var_3 = (short)29984;
int var_4 = -127978273;
int var_6 = 1332860433;
unsigned char var_7 = (unsigned char)12;
int var_9 = -775051279;
short var_11 = (short)10630;
int var_12 = 1204416217;
int zero = 0;
int var_14 = -1618157863;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
