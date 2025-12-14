#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 2324115698U;
int var_3 = 576991733;
unsigned int var_4 = 3325338046U;
unsigned long long int var_7 = 14675395369955094595ULL;
unsigned int var_9 = 2273326226U;
int zero = 0;
int var_10 = 1631138204;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 8196998089529211817ULL;
short var_13 = (short)-559;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
