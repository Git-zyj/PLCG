#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1284061435U;
long long int var_1 = -7003790419045305182LL;
unsigned int var_5 = 970467128U;
long long int var_8 = 5023868004080612460LL;
int zero = 0;
unsigned int var_12 = 2097753640U;
int var_13 = -1233701902;
int var_14 = 784841166;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
