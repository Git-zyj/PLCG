#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)15;
unsigned char var_3 = (unsigned char)59;
unsigned char var_6 = (unsigned char)209;
int var_7 = 1468171330;
signed char var_9 = (signed char)-97;
int zero = 0;
int var_10 = 1900755884;
unsigned long long int var_11 = 13090892830590935876ULL;
unsigned int var_12 = 3943044583U;
_Bool var_13 = (_Bool)0;
int var_14 = -1485493968;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
