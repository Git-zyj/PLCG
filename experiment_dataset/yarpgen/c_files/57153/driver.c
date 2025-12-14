#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_6 = (signed char)-106;
signed char var_7 = (signed char)43;
unsigned long long int var_12 = 17616987553988077573ULL;
long long int var_13 = -4868778352961687517LL;
int zero = 0;
long long int var_17 = 1436340862563638846LL;
unsigned int var_18 = 4164357510U;
long long int var_19 = -6973513668017303012LL;
unsigned long long int var_20 = 18190714129765776246ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
