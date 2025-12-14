#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_5 = (unsigned short)37914;
_Bool var_10 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int var_15 = -4784843;
int zero = 0;
unsigned int var_20 = 1050169848U;
unsigned long long int var_21 = 7708330077063011242ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
