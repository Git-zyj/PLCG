#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1067691974U;
int var_7 = -878485141;
unsigned long long int var_12 = 10825752454844477719ULL;
signed char var_14 = (signed char)84;
signed char var_15 = (signed char)61;
unsigned int var_16 = 994824674U;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)18505;
unsigned int var_21 = 795896062U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
