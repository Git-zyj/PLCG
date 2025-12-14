#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1999156412;
unsigned long long int var_2 = 15249193464754941846ULL;
unsigned long long int var_8 = 2301515363628464635ULL;
unsigned int var_10 = 2601582603U;
unsigned char var_12 = (unsigned char)156;
short var_13 = (short)-9313;
short var_17 = (short)-22683;
int zero = 0;
int var_20 = 1212158521;
unsigned long long int var_21 = 2787335343587032756ULL;
unsigned long long int var_22 = 10522238132529222981ULL;
unsigned int var_23 = 4059793204U;
unsigned short var_24 = (unsigned short)56841;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
