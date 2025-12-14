#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_5 = -1228876877969536274LL;
long long int var_13 = -1633938190754446618LL;
unsigned char var_18 = (unsigned char)66;
short var_19 = (short)-500;
int zero = 0;
short var_20 = (short)5833;
unsigned long long int var_21 = 14100482936268906495ULL;
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
