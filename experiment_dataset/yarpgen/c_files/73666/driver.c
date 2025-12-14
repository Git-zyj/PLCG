#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47797;
unsigned short var_3 = (unsigned short)1989;
long long int var_4 = 100039172495614589LL;
long long int var_8 = 7081315586652337634LL;
unsigned short var_13 = (unsigned short)24808;
int zero = 0;
long long int var_17 = 5950953940424774578LL;
long long int var_18 = -5619605191460979283LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
