#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -7356910710648316914LL;
signed char var_4 = (signed char)-12;
unsigned int var_5 = 624749009U;
unsigned int var_7 = 3505336703U;
unsigned short var_8 = (unsigned short)18274;
int zero = 0;
long long int var_10 = 5300226108758421298LL;
signed char var_11 = (signed char)48;
short var_12 = (short)-4510;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
