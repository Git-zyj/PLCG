#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 740464034U;
short var_1 = (short)-22270;
unsigned int var_5 = 3083426117U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-83;
unsigned long long int var_9 = 181599114640821553ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 15804023616559498223ULL;
int zero = 0;
unsigned int var_12 = 1043491837U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
