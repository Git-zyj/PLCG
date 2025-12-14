#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 242867150U;
_Bool var_4 = (_Bool)1;
int var_5 = 1442865394;
signed char var_10 = (signed char)-107;
unsigned long long int var_11 = 11590353138678975704ULL;
unsigned short var_12 = (unsigned short)52513;
signed char var_13 = (signed char)1;
int zero = 0;
unsigned long long int var_14 = 11797574249451525205ULL;
int var_15 = -498286958;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
