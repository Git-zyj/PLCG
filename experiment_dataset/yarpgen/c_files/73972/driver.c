#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)82;
long long int var_8 = -1568844030691417252LL;
long long int var_9 = 1797897177192056171LL;
unsigned long long int var_11 = 6071333208865412221ULL;
int zero = 0;
unsigned long long int var_13 = 16475839072520045348ULL;
unsigned char var_14 = (unsigned char)225;
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
