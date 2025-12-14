#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10887;
unsigned int var_2 = 1692228410U;
unsigned short var_4 = (unsigned short)18232;
signed char var_9 = (signed char)-32;
short var_11 = (short)64;
int var_14 = 1160793471;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 3017990674513252095ULL;
unsigned short var_21 = (unsigned short)31521;
long long int var_22 = 6371172766897517309LL;
signed char var_23 = (signed char)-61;
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
