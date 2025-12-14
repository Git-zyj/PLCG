#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)243;
unsigned long long int var_10 = 11894342293344385839ULL;
unsigned long long int var_11 = 17567849011358339320ULL;
short var_16 = (short)-10108;
short var_17 = (short)13044;
unsigned char var_18 = (unsigned char)190;
int zero = 0;
long long int var_19 = -706214326422128027LL;
signed char var_20 = (signed char)73;
unsigned char var_21 = (unsigned char)65;
long long int var_22 = -7388403202435645223LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
