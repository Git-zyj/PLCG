#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-84;
unsigned char var_8 = (unsigned char)84;
int var_10 = 985456574;
int var_11 = -854452424;
unsigned long long int var_14 = 10097454502721232061ULL;
long long int var_15 = -392198239826979214LL;
int zero = 0;
int var_16 = 1341098417;
signed char var_17 = (signed char)6;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
