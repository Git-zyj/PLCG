#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6909455904168717976ULL;
_Bool var_7 = (_Bool)0;
long long int var_12 = -6131987238848251846LL;
int zero = 0;
unsigned short var_15 = (unsigned short)13502;
short var_16 = (short)-10136;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
