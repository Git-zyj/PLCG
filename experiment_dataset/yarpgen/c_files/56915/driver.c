#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
unsigned int var_3 = 3155714541U;
int var_6 = -555510179;
int var_12 = 1627958128;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)16;
int zero = 0;
long long int var_19 = 2183433866272325035LL;
unsigned int var_20 = 2740490725U;
void init() {
}

void checksum() {
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
