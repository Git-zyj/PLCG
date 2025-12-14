#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10968119322670350584ULL;
signed char var_5 = (signed char)-126;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 591552465U;
long long int var_10 = 5732108534213227221LL;
_Bool var_12 = (_Bool)0;
int var_14 = 1069174096;
int zero = 0;
short var_15 = (short)-20560;
unsigned long long int var_16 = 18149926246694802889ULL;
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
