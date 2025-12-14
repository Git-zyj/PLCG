#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 331977098;
unsigned long long int var_6 = 14225723604587706187ULL;
long long int var_8 = 1524980122266135270LL;
unsigned int var_9 = 1347282842U;
int var_12 = 764176438;
int zero = 0;
int var_14 = 229853623;
int var_15 = -2043207480;
unsigned int var_16 = 1419780127U;
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
