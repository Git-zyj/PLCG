#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21082;
unsigned int var_2 = 161801441U;
unsigned char var_6 = (unsigned char)125;
signed char var_7 = (signed char)-37;
long long int var_8 = -8991186234607274438LL;
unsigned long long int var_12 = 12851855394505376455ULL;
unsigned short var_13 = (unsigned short)22712;
int zero = 0;
unsigned int var_14 = 1974329245U;
signed char var_15 = (signed char)-113;
int var_16 = -804730386;
int var_17 = -784405485;
void init() {
}

void checksum() {
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
