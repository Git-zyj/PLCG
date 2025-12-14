#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -708595751;
long long int var_4 = 2746586508754188872LL;
unsigned int var_6 = 1940350865U;
int zero = 0;
long long int var_12 = -6233179795278097724LL;
unsigned int var_13 = 1746579146U;
unsigned short var_14 = (unsigned short)61727;
long long int var_15 = 7602673234657613497LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
