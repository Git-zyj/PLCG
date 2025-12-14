#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4020512429983372897LL;
unsigned char var_2 = (unsigned char)149;
unsigned int var_5 = 2568218737U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)64575;
int zero = 0;
signed char var_10 = (signed char)-102;
unsigned char var_11 = (unsigned char)26;
unsigned int var_12 = 3025451098U;
long long int var_13 = 1644418052665220393LL;
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
