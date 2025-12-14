#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9103;
unsigned short var_2 = (unsigned short)30477;
unsigned int var_10 = 2910730216U;
int zero = 0;
long long int var_12 = -9062531830397866552LL;
unsigned int var_13 = 2466085272U;
unsigned int var_14 = 1540826857U;
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
