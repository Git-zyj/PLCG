#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5440;
unsigned int var_2 = 637171503U;
short var_5 = (short)-7017;
unsigned char var_8 = (unsigned char)246;
signed char var_10 = (signed char)19;
int zero = 0;
unsigned long long int var_16 = 11629712564674047865ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
