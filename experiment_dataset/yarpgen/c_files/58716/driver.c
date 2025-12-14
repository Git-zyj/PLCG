#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48193;
unsigned int var_2 = 3467800147U;
unsigned int var_7 = 1812211003U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)193;
int zero = 0;
unsigned int var_20 = 2798413457U;
long long int var_21 = -2065459531356052009LL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3541019100U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
