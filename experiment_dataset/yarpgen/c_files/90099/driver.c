#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
signed char var_1 = (signed char)22;
unsigned long long int var_3 = 2959917299625007615ULL;
unsigned long long int var_4 = 16956355318168878442ULL;
signed char var_5 = (signed char)-18;
short var_8 = (short)9228;
signed char var_10 = (signed char)-18;
unsigned int var_11 = 672392876U;
signed char var_14 = (signed char)62;
signed char var_16 = (signed char)-44;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-57;
unsigned int var_19 = 545158537U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
