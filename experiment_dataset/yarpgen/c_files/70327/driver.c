#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
unsigned int var_2 = 1743873933U;
unsigned long long int var_5 = 9209272210847972026ULL;
unsigned long long int var_14 = 1932808217912722454ULL;
unsigned long long int var_15 = 18063277269559939204ULL;
int zero = 0;
unsigned long long int var_18 = 16267248984544019460ULL;
short var_19 = (short)1754;
unsigned short var_20 = (unsigned short)9721;
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
