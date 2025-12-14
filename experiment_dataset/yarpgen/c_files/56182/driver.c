#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 609919590U;
int var_7 = 2044953258;
unsigned int var_8 = 2627803538U;
int var_10 = -177150202;
int zero = 0;
unsigned int var_20 = 1826898469U;
unsigned char var_21 = (unsigned char)202;
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
