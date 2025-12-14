#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4817889602567224080LL;
unsigned int var_3 = 286943770U;
unsigned short var_9 = (unsigned short)4957;
signed char var_11 = (signed char)99;
int zero = 0;
unsigned short var_16 = (unsigned short)24742;
signed char var_17 = (signed char)12;
unsigned int var_18 = 888596538U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
