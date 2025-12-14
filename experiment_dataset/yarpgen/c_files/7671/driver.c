#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 721501283U;
unsigned short var_5 = (unsigned short)16380;
unsigned long long int var_6 = 15104285464576532271ULL;
short var_7 = (short)-10791;
unsigned long long int var_10 = 15865477556364725313ULL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-29616;
int zero = 0;
unsigned short var_14 = (unsigned short)19418;
unsigned long long int var_15 = 6462853827504605302ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
