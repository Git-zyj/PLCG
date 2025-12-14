#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2163526877U;
unsigned long long int var_1 = 4001329555961631989ULL;
unsigned char var_2 = (unsigned char)61;
unsigned long long int var_5 = 8886954407623517332ULL;
unsigned char var_7 = (unsigned char)207;
signed char var_8 = (signed char)-13;
unsigned char var_9 = (unsigned char)235;
signed char var_10 = (signed char)20;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)196;
short var_13 = (short)1289;
int zero = 0;
int var_14 = 553225399;
unsigned short var_15 = (unsigned short)42558;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 74124782U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
