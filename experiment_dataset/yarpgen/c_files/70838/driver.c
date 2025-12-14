#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 449813222;
signed char var_3 = (signed char)97;
long long int var_4 = 177516850972195555LL;
long long int var_7 = -8949600228020031384LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 7977085511158896853ULL;
long long int var_14 = -1793754620216125453LL;
long long int var_15 = 5170775722969952112LL;
void init() {
}

void checksum() {
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
