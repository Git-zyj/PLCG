#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 150426071U;
short var_14 = (short)-20610;
short var_16 = (short)22696;
int zero = 0;
int var_19 = 1849832531;
unsigned long long int var_20 = 17580971711160406177ULL;
unsigned short var_21 = (unsigned short)33555;
void init() {
}

void checksum() {
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
