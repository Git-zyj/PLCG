#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-122;
short var_10 = (short)28212;
unsigned short var_13 = (unsigned short)12373;
unsigned char var_18 = (unsigned char)228;
int zero = 0;
unsigned int var_19 = 4227297073U;
short var_20 = (short)13954;
unsigned short var_21 = (unsigned short)1056;
unsigned char var_22 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
