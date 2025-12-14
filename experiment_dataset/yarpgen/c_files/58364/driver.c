#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)193;
long long int var_11 = 4506243414695875218LL;
unsigned int var_18 = 3257502561U;
int zero = 0;
unsigned short var_19 = (unsigned short)5555;
unsigned long long int var_20 = 10733350046279236730ULL;
unsigned long long int var_21 = 14500481180847683679ULL;
short var_22 = (short)30512;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
