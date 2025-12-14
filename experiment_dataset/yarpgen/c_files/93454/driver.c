#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15554116276623518527ULL;
unsigned long long int var_3 = 11595015379389551411ULL;
short var_5 = (short)-10464;
short var_7 = (short)-14041;
unsigned int var_9 = 4059557047U;
signed char var_11 = (signed char)-78;
unsigned long long int var_12 = 12090474441518418591ULL;
unsigned char var_14 = (unsigned char)244;
unsigned short var_15 = (unsigned short)15967;
short var_17 = (short)-4742;
int zero = 0;
signed char var_18 = (signed char)-82;
long long int var_19 = 3844627208957914769LL;
long long int var_20 = 3051557336117292354LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
