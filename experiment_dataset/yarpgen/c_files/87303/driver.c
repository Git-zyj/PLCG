#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8820781184567324641LL;
signed char var_2 = (signed char)-8;
unsigned char var_3 = (unsigned char)162;
short var_4 = (short)-8532;
_Bool var_5 = (_Bool)1;
short var_7 = (short)29992;
long long int var_8 = 6443728590538159206LL;
unsigned short var_9 = (unsigned short)47972;
int var_10 = 625594334;
signed char var_12 = (signed char)49;
int var_13 = 1297270417;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 4970001799682115025LL;
unsigned int var_16 = 1001639662U;
void init() {
}

void checksum() {
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
