#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_18 = (signed char)-41;
unsigned char var_19 = (unsigned char)62;
int zero = 0;
long long int var_20 = 9137255121927468259LL;
unsigned int var_21 = 2765800963U;
unsigned short var_22 = (unsigned short)9750;
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
