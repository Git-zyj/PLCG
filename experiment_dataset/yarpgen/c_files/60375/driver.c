#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7279903846218468207LL;
unsigned long long int var_5 = 13381872220508368622ULL;
unsigned short var_8 = (unsigned short)61389;
unsigned int var_10 = 3001604806U;
unsigned char var_13 = (unsigned char)44;
short var_16 = (short)-15457;
int zero = 0;
unsigned long long int var_19 = 5921667418795080335ULL;
unsigned long long int var_20 = 6300740908069800730ULL;
signed char var_21 = (signed char)-40;
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
