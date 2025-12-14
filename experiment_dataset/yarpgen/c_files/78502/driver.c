#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)214;
signed char var_7 = (signed char)-18;
unsigned long long int var_12 = 11001837706826984783ULL;
unsigned short var_14 = (unsigned short)8119;
long long int var_15 = -5810086781831965273LL;
int zero = 0;
unsigned int var_16 = 2660238299U;
unsigned char var_17 = (unsigned char)205;
short var_18 = (short)-20604;
void init() {
}

void checksum() {
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
