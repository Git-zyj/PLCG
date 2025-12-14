#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -634711023;
unsigned int var_5 = 3692929463U;
unsigned short var_6 = (unsigned short)39602;
unsigned short var_8 = (unsigned short)56160;
signed char var_9 = (signed char)-75;
int zero = 0;
short var_10 = (short)19996;
unsigned int var_11 = 1108524153U;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
