#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13107;
unsigned int var_6 = 1677340584U;
long long int var_7 = 9211726782447551093LL;
long long int var_11 = -5089385324277597767LL;
signed char var_14 = (signed char)-114;
int var_15 = -1245910482;
unsigned int var_16 = 2343203098U;
int zero = 0;
long long int var_17 = 8650757679506653522LL;
long long int var_18 = -3557964611255114299LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
