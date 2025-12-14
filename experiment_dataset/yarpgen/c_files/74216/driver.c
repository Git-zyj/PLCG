#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5618274588043398301ULL;
unsigned int var_3 = 862373261U;
unsigned short var_5 = (unsigned short)43872;
int var_7 = -1465837631;
long long int var_12 = 3277073603622141611LL;
unsigned long long int var_13 = 14464568667933991910ULL;
unsigned char var_14 = (unsigned char)41;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 4015613208U;
unsigned int var_17 = 2177981938U;
unsigned long long int var_18 = 16942731798948040915ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
