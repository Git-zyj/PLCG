#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)16;
unsigned long long int var_9 = 14885973339758965973ULL;
int zero = 0;
unsigned int var_12 = 2601648537U;
unsigned int var_13 = 1400318015U;
unsigned int var_14 = 3434587761U;
unsigned long long int var_15 = 7477536858110425865ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
