#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned int var_1 = 3621417852U;
unsigned int var_2 = 2148075623U;
short var_3 = (short)-18024;
unsigned long long int var_4 = 17813992167044018694ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 5077818324315827583ULL;
signed char var_10 = (signed char)118;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 17209413460930909206ULL;
unsigned long long int var_14 = 7245743992558660293ULL;
unsigned long long int var_15 = 10426276020575719005ULL;
unsigned char var_16 = (unsigned char)145;
unsigned long long int var_17 = 18288719321440644067ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
