#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17466;
unsigned long long int var_4 = 1151179595000083716ULL;
unsigned int var_8 = 1529791049U;
unsigned int var_14 = 3463867730U;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = 2020258285;
signed char var_19 = (signed char)75;
unsigned char var_20 = (unsigned char)218;
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
