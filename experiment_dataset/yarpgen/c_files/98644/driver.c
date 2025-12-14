#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48848;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)43783;
unsigned int var_3 = 3363773388U;
signed char var_4 = (signed char)-122;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_11 = 798253873;
signed char var_12 = (signed char)84;
_Bool var_13 = (_Bool)1;
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
