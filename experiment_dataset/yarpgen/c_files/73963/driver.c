#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 420899838U;
unsigned char var_2 = (unsigned char)255;
unsigned char var_4 = (unsigned char)212;
_Bool var_7 = (_Bool)0;
int var_11 = 454379487;
int zero = 0;
unsigned long long int var_12 = 2403295487998753690ULL;
unsigned short var_13 = (unsigned short)52900;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
