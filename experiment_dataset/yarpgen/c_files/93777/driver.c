#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6443;
signed char var_2 = (signed char)38;
unsigned long long int var_3 = 14216525274348335724ULL;
long long int var_5 = 4341738127903021053LL;
unsigned int var_15 = 3089530727U;
unsigned char var_18 = (unsigned char)241;
int zero = 0;
unsigned char var_19 = (unsigned char)197;
short var_20 = (short)5977;
unsigned long long int var_21 = 27482150995763685ULL;
unsigned char var_22 = (unsigned char)137;
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
