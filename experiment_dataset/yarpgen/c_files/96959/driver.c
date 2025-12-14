#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7595205117348457955LL;
unsigned char var_7 = (unsigned char)48;
unsigned char var_10 = (unsigned char)254;
int zero = 0;
unsigned int var_14 = 2786664408U;
unsigned char var_15 = (unsigned char)46;
unsigned int var_16 = 623828431U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
