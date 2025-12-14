#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)27107;
short var_17 = (short)26434;
unsigned int var_18 = 516220895U;
long long int var_19 = -6089560052863032142LL;
int zero = 0;
int var_20 = 2129085430;
short var_21 = (short)-4302;
signed char var_22 = (signed char)-8;
unsigned short var_23 = (unsigned short)45552;
void init() {
}

void checksum() {
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
