#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)55;
unsigned char var_9 = (unsigned char)84;
unsigned char var_11 = (unsigned char)96;
unsigned char var_15 = (unsigned char)98;
unsigned char var_17 = (unsigned char)31;
unsigned char var_18 = (unsigned char)211;
unsigned char var_19 = (unsigned char)189;
int zero = 0;
unsigned char var_20 = (unsigned char)63;
unsigned char var_21 = (unsigned char)23;
unsigned char var_22 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
