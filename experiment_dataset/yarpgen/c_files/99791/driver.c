#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)30479;
unsigned short var_15 = (unsigned short)48325;
unsigned short var_16 = (unsigned short)63670;
int zero = 0;
unsigned short var_18 = (unsigned short)38498;
unsigned short var_19 = (unsigned short)11216;
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
