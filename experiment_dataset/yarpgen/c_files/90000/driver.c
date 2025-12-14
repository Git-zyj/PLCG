#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17327;
unsigned char var_1 = (unsigned char)62;
short var_2 = (short)18824;
unsigned short var_3 = (unsigned short)4202;
unsigned long long int var_5 = 1399727893568709131ULL;
signed char var_10 = (signed char)-113;
long long int var_12 = 5838348360193580718LL;
int zero = 0;
unsigned short var_14 = (unsigned short)64317;
short var_15 = (short)-3897;
unsigned long long int var_16 = 16001933920920844710ULL;
short var_17 = (short)-16081;
short var_18 = (short)-21433;
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
