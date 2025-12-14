#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 40658989;
unsigned int var_3 = 1299350191U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 14168757895968030374ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)21211;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
