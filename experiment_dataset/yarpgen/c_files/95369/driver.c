#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1728376990;
unsigned int var_1 = 290424573U;
unsigned long long int var_8 = 3773862531312733406ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)179;
unsigned long long int var_12 = 14611145054038102037ULL;
unsigned long long int var_13 = 14845466137197216649ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
