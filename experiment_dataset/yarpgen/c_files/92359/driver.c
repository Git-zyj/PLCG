#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)100;
signed char var_2 = (signed char)-72;
unsigned long long int var_5 = 8818781382627318539ULL;
long long int var_8 = 9170730810923759658LL;
signed char var_12 = (signed char)-36;
int zero = 0;
long long int var_14 = -2197774664168999144LL;
long long int var_15 = 84691475723329378LL;
void init() {
}

void checksum() {
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
