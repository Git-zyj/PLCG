#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50903;
int zero = 0;
unsigned int var_18 = 1046536532U;
long long int var_19 = -4211527693843614443LL;
int var_20 = 1858220964;
unsigned int var_21 = 68447006U;
unsigned short var_22 = (unsigned short)59999;
int var_23 = -1695028847;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
