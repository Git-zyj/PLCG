#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 517526392U;
int var_4 = 461674160;
signed char var_5 = (signed char)-98;
unsigned short var_7 = (unsigned short)20652;
short var_10 = (short)-24065;
short var_11 = (short)19117;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_19 = 923237755;
unsigned short var_20 = (unsigned short)6938;
unsigned short var_21 = (unsigned short)41213;
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
