#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 12534116842860549461ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-17;
unsigned int var_10 = 1309865721U;
unsigned short var_12 = (unsigned short)3244;
int zero = 0;
unsigned int var_17 = 2270382756U;
unsigned int var_18 = 1769203949U;
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
