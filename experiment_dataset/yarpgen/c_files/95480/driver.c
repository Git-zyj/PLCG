#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)92;
signed char var_4 = (signed char)4;
int var_5 = 155535139;
short var_6 = (short)28611;
unsigned char var_12 = (unsigned char)196;
int zero = 0;
unsigned int var_14 = 499797682U;
unsigned long long int var_15 = 4801448244836552658ULL;
unsigned char var_16 = (unsigned char)65;
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
