#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10860987302462559082ULL;
unsigned long long int var_5 = 13842510154995289117ULL;
short var_6 = (short)-16800;
unsigned short var_10 = (unsigned short)60007;
short var_11 = (short)-11537;
unsigned char var_12 = (unsigned char)6;
unsigned short var_14 = (unsigned short)44971;
short var_15 = (short)-10979;
int zero = 0;
short var_17 = (short)27314;
unsigned char var_18 = (unsigned char)69;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
