#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15679;
signed char var_1 = (signed char)-21;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-17494;
short var_5 = (short)3985;
long long int var_6 = -7888219342124990775LL;
int var_7 = 806360299;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-2465;
int zero = 0;
long long int var_10 = -7629022908096461241LL;
int var_11 = 398281035;
int var_12 = 772501415;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
