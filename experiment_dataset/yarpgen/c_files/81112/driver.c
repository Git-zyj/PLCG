#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = 6039448289720368866LL;
signed char var_4 = (signed char)6;
signed char var_8 = (signed char)37;
short var_11 = (short)-10625;
unsigned int var_13 = 2301065222U;
unsigned char var_15 = (unsigned char)212;
_Bool var_17 = (_Bool)0;
int var_18 = 465968024;
int zero = 0;
int var_19 = 147256754;
int var_20 = 1045503135;
signed char var_21 = (signed char)47;
long long int var_22 = 5897595985668558695LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
