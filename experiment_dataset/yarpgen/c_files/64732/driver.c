#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7899;
int var_2 = 947080447;
unsigned long long int var_4 = 8451020071217181783ULL;
unsigned char var_9 = (unsigned char)1;
unsigned int var_10 = 2257338813U;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)-11357;
unsigned short var_13 = (unsigned short)62431;
unsigned long long int var_14 = 10399479668042225236ULL;
_Bool var_15 = (_Bool)0;
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
