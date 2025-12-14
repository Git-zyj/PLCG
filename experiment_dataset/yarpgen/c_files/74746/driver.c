#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6579059620306813357ULL;
unsigned short var_2 = (unsigned short)49323;
_Bool var_3 = (_Bool)0;
int var_5 = -1458679879;
signed char var_6 = (signed char)94;
int var_7 = 107318220;
unsigned long long int var_8 = 6414510536652489323ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2220022963U;
unsigned long long int var_12 = 4073630936812531488ULL;
int zero = 0;
short var_13 = (short)11814;
signed char var_14 = (signed char)-100;
long long int var_15 = -6572705500784530368LL;
short var_16 = (short)-19328;
unsigned char var_17 = (unsigned char)236;
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
