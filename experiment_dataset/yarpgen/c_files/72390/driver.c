#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
unsigned long long int var_3 = 4234844585429266542ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 15930131540396963936ULL;
unsigned long long int var_7 = 4102297854560284415ULL;
long long int var_9 = 3821737953521254309LL;
long long int var_11 = 524288543179891264LL;
unsigned short var_12 = (unsigned short)63402;
unsigned short var_14 = (unsigned short)56720;
int zero = 0;
unsigned short var_15 = (unsigned short)52091;
int var_16 = 596162210;
unsigned int var_17 = 3922001021U;
unsigned int var_18 = 2100257057U;
unsigned long long int var_19 = 2210196297312630577ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
