#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-5;
unsigned short var_8 = (unsigned short)31613;
signed char var_10 = (signed char)69;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-264;
int zero = 0;
unsigned long long int var_15 = 15044233359856505808ULL;
_Bool var_16 = (_Bool)0;
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
