#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -359398419;
unsigned short var_7 = (unsigned short)32871;
unsigned short var_9 = (unsigned short)21948;
int zero = 0;
int var_14 = -591985605;
unsigned short var_15 = (unsigned short)49088;
void init() {
}

void checksum() {
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
