#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)5291;
unsigned long long int var_11 = 2033483349369372169ULL;
short var_14 = (short)28493;
int zero = 0;
int var_15 = -1008012492;
int var_16 = -1029864840;
short var_17 = (short)-12081;
unsigned long long int var_18 = 16160695280624207877ULL;
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
