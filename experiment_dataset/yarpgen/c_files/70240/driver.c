#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7084;
unsigned int var_4 = 1850800400U;
_Bool var_7 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-93;
unsigned long long int var_14 = 11031683861589086095ULL;
unsigned long long int var_15 = 11348774696187293853ULL;
int var_16 = -1542676128;
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
