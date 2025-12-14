#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11677;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 4076797596U;
unsigned char var_15 = (unsigned char)235;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6981412833507747191LL;
int zero = 0;
unsigned int var_19 = 1996708131U;
signed char var_20 = (signed char)-103;
unsigned int var_21 = 159533870U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
