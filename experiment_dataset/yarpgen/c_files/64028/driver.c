#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2073025597260335382LL;
unsigned short var_3 = (unsigned short)52709;
short var_4 = (short)2986;
signed char var_9 = (signed char)-94;
unsigned short var_10 = (unsigned short)8866;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2852130030U;
short var_14 = (short)-21411;
short var_15 = (short)17080;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2997886959U;
unsigned long long int var_18 = 7463467468729548380ULL;
unsigned long long int var_19 = 7847697270898918029ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
