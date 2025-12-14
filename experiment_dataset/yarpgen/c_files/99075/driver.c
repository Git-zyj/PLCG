#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9553;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1608001576U;
unsigned long long int var_10 = 12338456830030391995ULL;
unsigned short var_14 = (unsigned short)19997;
int zero = 0;
unsigned long long int var_15 = 5734423823942707681ULL;
unsigned int var_16 = 214298191U;
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
