#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 732464027;
unsigned int var_2 = 1028814010U;
unsigned int var_3 = 2856246364U;
unsigned short var_4 = (unsigned short)57539;
int zero = 0;
short var_10 = (short)-7003;
unsigned long long int var_11 = 2748545664803345650ULL;
long long int var_12 = 9144035104404654637LL;
unsigned int var_13 = 1770416338U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
