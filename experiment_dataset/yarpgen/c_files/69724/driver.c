#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2398308140U;
unsigned int var_9 = 3610826535U;
unsigned short var_14 = (unsigned short)13580;
int zero = 0;
unsigned short var_18 = (unsigned short)48026;
signed char var_19 = (signed char)-46;
void init() {
}

void checksum() {
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
