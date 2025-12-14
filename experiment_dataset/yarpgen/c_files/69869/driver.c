#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1207983756U;
int var_4 = -1629431960;
int var_6 = 1599430013;
unsigned long long int var_7 = 5163538042781166354ULL;
long long int var_8 = 1147753402906531487LL;
int var_9 = -349284612;
short var_10 = (short)-2011;
int zero = 0;
unsigned int var_11 = 3743847673U;
int var_12 = 2090604263;
signed char var_13 = (signed char)-31;
long long int var_14 = 3722687006085355956LL;
void init() {
}

void checksum() {
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
