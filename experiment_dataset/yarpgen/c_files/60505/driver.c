#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)118;
int var_2 = 1345860154;
unsigned short var_4 = (unsigned short)58942;
short var_5 = (short)-2964;
short var_8 = (short)27202;
unsigned int var_9 = 4035972373U;
signed char var_10 = (signed char)-123;
unsigned long long int var_12 = 12269603980656486002ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 2481379205812099006ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
