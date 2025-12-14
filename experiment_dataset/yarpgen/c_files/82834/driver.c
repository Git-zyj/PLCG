#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)22;
unsigned short var_9 = (unsigned short)7432;
int var_10 = 398671700;
unsigned short var_13 = (unsigned short)2176;
int var_14 = 161827232;
int var_16 = 2009706611;
int zero = 0;
short var_20 = (short)18225;
unsigned long long int var_21 = 13015497070862679957ULL;
void init() {
}

void checksum() {
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
