#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)154;
signed char var_9 = (signed char)8;
short var_10 = (short)-23061;
int zero = 0;
unsigned int var_11 = 3352622094U;
unsigned long long int var_12 = 15675922230661647975ULL;
short var_13 = (short)4192;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
