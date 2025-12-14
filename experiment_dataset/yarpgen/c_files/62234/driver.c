#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-24095;
long long int var_4 = -4194981012028771267LL;
unsigned long long int var_8 = 512280288625598391ULL;
int var_10 = -2133573544;
unsigned int var_12 = 1824858301U;
unsigned int var_13 = 783130785U;
unsigned int var_14 = 3240853292U;
long long int var_16 = 3992542175237053365LL;
int zero = 0;
short var_17 = (short)972;
long long int var_18 = -5244904529231919886LL;
unsigned long long int var_19 = 3120924401185178939ULL;
unsigned long long int var_20 = 14778407072468650789ULL;
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
