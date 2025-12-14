#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1018742429;
unsigned long long int var_1 = 2500337879126552644ULL;
unsigned long long int var_3 = 15360736385550562513ULL;
int var_4 = 777335548;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 986734856U;
int var_9 = 1113189363;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 747377407;
int var_13 = 1599489215;
_Bool var_14 = (_Bool)0;
int var_15 = 1138184717;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
