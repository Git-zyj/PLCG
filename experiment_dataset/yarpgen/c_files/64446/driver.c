#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 708518807008595909LL;
unsigned char var_6 = (unsigned char)116;
long long int var_7 = 8262794159760087345LL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2912968190U;
int zero = 0;
unsigned short var_15 = (unsigned short)55267;
short var_16 = (short)-30398;
unsigned char var_17 = (unsigned char)61;
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
