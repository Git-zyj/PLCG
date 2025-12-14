#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3376021041U;
int var_1 = 418877346;
int var_2 = -456721938;
_Bool var_3 = (_Bool)1;
long long int var_4 = -1515324687546135080LL;
unsigned long long int var_5 = 14713047987784071941ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2290132855U;
unsigned short var_8 = (unsigned short)63973;
unsigned int var_9 = 2694610241U;
int zero = 0;
int var_10 = 1688075562;
unsigned int var_11 = 3593713399U;
unsigned int var_12 = 2662076179U;
long long int var_13 = 7170143784859183144LL;
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
