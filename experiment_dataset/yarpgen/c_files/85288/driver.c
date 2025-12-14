#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59162;
unsigned long long int var_3 = 8830388806028910553ULL;
unsigned short var_4 = (unsigned short)44340;
signed char var_5 = (signed char)-56;
_Bool var_7 = (_Bool)0;
int zero = 0;
short var_11 = (short)7204;
unsigned long long int var_12 = 16692076568344311820ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
