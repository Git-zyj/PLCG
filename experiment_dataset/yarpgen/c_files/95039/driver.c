#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2045850796U;
int var_6 = -477827328;
unsigned long long int var_7 = 15580270934136899115ULL;
signed char var_9 = (signed char)51;
signed char var_14 = (signed char)115;
signed char var_18 = (signed char)30;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)41357;
short var_22 = (short)-13540;
long long int var_23 = 2171178901124772442LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
