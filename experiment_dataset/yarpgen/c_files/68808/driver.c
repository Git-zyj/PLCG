#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)37330;
unsigned short var_9 = (unsigned short)50189;
short var_14 = (short)-5241;
int zero = 0;
unsigned int var_18 = 1792603588U;
long long int var_19 = -8376672357818667893LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
