#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32294;
signed char var_1 = (signed char)-116;
signed char var_3 = (signed char)50;
signed char var_5 = (signed char)80;
short var_10 = (short)497;
int zero = 0;
signed char var_13 = (signed char)-108;
long long int var_14 = -1680636483703182955LL;
unsigned short var_15 = (unsigned short)22332;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
