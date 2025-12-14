#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1918375852;
unsigned int var_2 = 861847846U;
signed char var_4 = (signed char)39;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)58651;
signed char var_8 = (signed char)-98;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-78;
signed char var_14 = (signed char)-101;
unsigned short var_15 = (unsigned short)25472;
int var_16 = -54413064;
unsigned int var_17 = 109492901U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
