#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -388229358;
unsigned short var_2 = (unsigned short)12557;
unsigned int var_8 = 2016753282U;
unsigned int var_9 = 1313559986U;
unsigned char var_17 = (unsigned char)154;
int zero = 0;
unsigned char var_20 = (unsigned char)126;
unsigned long long int var_21 = 14697953117639197361ULL;
long long int var_22 = -3963646304841929680LL;
void init() {
}

void checksum() {
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
