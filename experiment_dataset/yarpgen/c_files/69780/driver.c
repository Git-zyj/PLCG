#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32331;
long long int var_1 = -2232177595723946019LL;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 1802922426U;
unsigned long long int var_9 = 6203684007075004807ULL;
int var_10 = 532363302;
short var_11 = (short)4818;
int zero = 0;
signed char var_12 = (signed char)-92;
unsigned int var_13 = 954499588U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-6447;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
