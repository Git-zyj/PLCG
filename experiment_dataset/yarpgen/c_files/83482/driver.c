#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)59;
unsigned char var_18 = (unsigned char)184;
int zero = 0;
unsigned char var_19 = (unsigned char)229;
unsigned char var_20 = (unsigned char)54;
unsigned char var_21 = (unsigned char)96;
unsigned char var_22 = (unsigned char)169;
unsigned char var_23 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
