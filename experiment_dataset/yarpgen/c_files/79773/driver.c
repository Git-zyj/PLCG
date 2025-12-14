#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_7 = -801818046;
unsigned long long int var_9 = 9729591813118433307ULL;
int var_11 = -638060541;
int var_12 = 1449924521;
short var_14 = (short)-12119;
int zero = 0;
unsigned long long int var_16 = 11978980378435583817ULL;
int var_17 = -2030114705;
short var_18 = (short)32182;
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
