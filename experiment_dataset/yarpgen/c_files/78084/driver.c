#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1869548234;
signed char var_4 = (signed char)-122;
signed char var_5 = (signed char)-29;
int var_6 = 1118158951;
short var_8 = (short)22938;
int var_15 = 145376244;
int zero = 0;
unsigned int var_19 = 15674584U;
unsigned int var_20 = 637692236U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
