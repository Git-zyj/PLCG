#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9213230333404675566LL;
long long int var_5 = -7484752764255667651LL;
signed char var_7 = (signed char)-18;
unsigned char var_10 = (unsigned char)7;
unsigned long long int var_13 = 13022885227134398213ULL;
short var_14 = (short)-17041;
int zero = 0;
unsigned short var_15 = (unsigned short)41222;
unsigned int var_16 = 2227216533U;
long long int var_17 = 4095447077031947574LL;
void init() {
}

void checksum() {
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
