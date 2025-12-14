#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)29;
long long int var_3 = -2966552777494984289LL;
long long int var_4 = 1722256750479160839LL;
signed char var_5 = (signed char)64;
signed char var_16 = (signed char)-122;
int zero = 0;
unsigned int var_18 = 2094224240U;
long long int var_19 = -46881639102836095LL;
int var_20 = -1893610995;
unsigned char var_21 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
