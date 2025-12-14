#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17428787582697757237ULL;
short var_2 = (short)-5466;
unsigned long long int var_4 = 14156028809032049012ULL;
unsigned char var_5 = (unsigned char)2;
long long int var_7 = 746850461118912120LL;
unsigned int var_8 = 2818714693U;
int zero = 0;
short var_11 = (short)-28595;
unsigned long long int var_12 = 7133659255144821310ULL;
long long int var_13 = 6753077440861297600LL;
unsigned short var_14 = (unsigned short)65266;
int var_15 = -43828423;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
