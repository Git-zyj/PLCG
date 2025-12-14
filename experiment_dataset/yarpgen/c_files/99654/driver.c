#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11653;
_Bool var_2 = (_Bool)1;
short var_5 = (short)-21009;
unsigned short var_8 = (unsigned short)17915;
unsigned long long int var_11 = 16418435032713044590ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2042921895U;
int var_14 = -268838934;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
