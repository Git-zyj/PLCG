#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5497;
short var_1 = (short)26658;
_Bool var_8 = (_Bool)1;
unsigned char var_12 = (unsigned char)134;
unsigned char var_13 = (unsigned char)18;
int var_14 = -596840205;
_Bool var_15 = (_Bool)1;
int var_17 = 515886476;
int zero = 0;
int var_19 = -1157060280;
signed char var_20 = (signed char)-93;
unsigned long long int var_21 = 7927793406324401760ULL;
void init() {
}

void checksum() {
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
