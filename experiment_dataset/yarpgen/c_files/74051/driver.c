#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23913;
unsigned short var_5 = (unsigned short)58576;
long long int var_9 = -6357703238895878716LL;
unsigned long long int var_12 = 4505914384450400140ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2537127508U;
unsigned char var_15 = (unsigned char)213;
signed char var_16 = (signed char)-50;
unsigned int var_17 = 2666320905U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
