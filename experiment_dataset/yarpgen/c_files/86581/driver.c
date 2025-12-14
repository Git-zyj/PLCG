#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 12777138450683274771ULL;
short var_3 = (short)15768;
signed char var_4 = (signed char)-89;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)39597;
unsigned int var_14 = 3489952651U;
int zero = 0;
unsigned int var_16 = 3824457736U;
unsigned char var_17 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
