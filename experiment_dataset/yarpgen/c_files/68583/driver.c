#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10652519943244434031ULL;
_Bool var_1 = (_Bool)1;
short var_4 = (short)-24481;
unsigned long long int var_5 = 13849125994801217647ULL;
unsigned char var_8 = (unsigned char)14;
int var_9 = -34046242;
unsigned long long int var_14 = 14713174343076746635ULL;
int zero = 0;
unsigned long long int var_15 = 1799532049359162765ULL;
short var_16 = (short)-21574;
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
