#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8550548307151108046LL;
int var_4 = -269414340;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)21;
unsigned long long int var_8 = 16424511953710922957ULL;
signed char var_9 = (signed char)-119;
signed char var_10 = (signed char)87;
signed char var_12 = (signed char)76;
int zero = 0;
unsigned long long int var_13 = 6125107507702662139ULL;
long long int var_14 = -4389737747844457343LL;
signed char var_15 = (signed char)(-127 - 1);
int var_16 = -1825151182;
void init() {
}

void checksum() {
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
