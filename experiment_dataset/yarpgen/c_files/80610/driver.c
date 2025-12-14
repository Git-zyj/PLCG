#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 500293274U;
unsigned int var_3 = 1435340971U;
signed char var_4 = (signed char)113;
long long int var_8 = 6977039052160755807LL;
int zero = 0;
unsigned char var_20 = (unsigned char)170;
unsigned short var_21 = (unsigned short)50262;
void init() {
}

void checksum() {
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
