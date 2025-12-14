#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
long long int var_2 = 5331815277558103325LL;
_Bool var_3 = (_Bool)0;
unsigned short var_10 = (unsigned short)45466;
int zero = 0;
unsigned int var_11 = 2927398562U;
unsigned int var_12 = 3808774503U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
