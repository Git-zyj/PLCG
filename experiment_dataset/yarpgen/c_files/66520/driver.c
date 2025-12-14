#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4210;
int var_3 = -858436020;
int var_7 = 1052076751;
signed char var_12 = (signed char)32;
unsigned short var_13 = (unsigned short)63053;
unsigned short var_14 = (unsigned short)26593;
unsigned long long int var_16 = 1830572760948383650ULL;
unsigned int var_17 = 3699595946U;
int zero = 0;
int var_20 = -1350897861;
signed char var_21 = (signed char)-61;
long long int var_22 = -6634427706819095149LL;
void init() {
}

void checksum() {
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
