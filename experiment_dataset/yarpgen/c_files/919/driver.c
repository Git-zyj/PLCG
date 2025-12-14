#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned long long int var_12 = 6110126837983081800ULL;
unsigned int var_13 = 3685664919U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 1474723328U;
unsigned long long int var_19 = 11903014208950504001ULL;
signed char var_20 = (signed char)55;
unsigned char var_21 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
