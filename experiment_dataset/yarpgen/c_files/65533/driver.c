#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2299134394325618552LL;
_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)245;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)105;
unsigned char var_15 = (unsigned char)20;
short var_16 = (short)11184;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
