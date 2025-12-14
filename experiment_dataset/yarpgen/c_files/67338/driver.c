#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned long long int var_1 = 5515901804106884755ULL;
unsigned long long int var_3 = 8445544961939091063ULL;
unsigned int var_5 = 2326549169U;
short var_10 = (short)19037;
unsigned char var_17 = (unsigned char)93;
int zero = 0;
long long int var_18 = 1139548069746212779LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
