#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4320409545384665542LL;
int var_6 = -1968639330;
unsigned char var_8 = (unsigned char)139;
unsigned long long int var_9 = 9949224852977161821ULL;
long long int var_10 = 7948731656977738612LL;
unsigned int var_12 = 757835773U;
unsigned char var_15 = (unsigned char)54;
short var_16 = (short)12453;
int zero = 0;
short var_18 = (short)-8479;
unsigned int var_19 = 1795886565U;
long long int var_20 = 3724318232063076836LL;
short var_21 = (short)28649;
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
