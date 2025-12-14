#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)19702;
unsigned short var_6 = (unsigned short)54020;
signed char var_8 = (signed char)-41;
unsigned long long int var_10 = 2690443631767402718ULL;
int var_15 = 438601831;
int zero = 0;
unsigned int var_18 = 1487701189U;
unsigned short var_19 = (unsigned short)26891;
short var_20 = (short)-26851;
unsigned long long int var_21 = 358589815378713252ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
