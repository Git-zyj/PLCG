#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 7841161327233698757ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)27119;
unsigned short var_12 = (unsigned short)37200;
void init() {
}

void checksum() {
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
