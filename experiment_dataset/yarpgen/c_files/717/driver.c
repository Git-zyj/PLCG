#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6077608424522641402LL;
unsigned int var_5 = 3635345245U;
short var_9 = (short)493;
int zero = 0;
signed char var_14 = (signed char)-85;
unsigned short var_15 = (unsigned short)56024;
unsigned int var_16 = 4132809628U;
unsigned long long int var_17 = 6758662133103528876ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
