#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1293759071U;
long long int var_1 = 6304294715636335997LL;
unsigned short var_4 = (unsigned short)1721;
signed char var_5 = (signed char)-88;
long long int var_6 = -2127356538596761350LL;
short var_7 = (short)-5573;
int var_9 = 888697933;
long long int var_10 = 1622932374285597126LL;
unsigned char var_11 = (unsigned char)129;
signed char var_13 = (signed char)-3;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 773465766U;
unsigned char var_17 = (unsigned char)129;
signed char var_18 = (signed char)64;
void init() {
}

void checksum() {
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
