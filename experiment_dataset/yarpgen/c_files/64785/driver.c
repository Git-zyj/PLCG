#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)211;
unsigned long long int var_4 = 14777996610460918263ULL;
signed char var_7 = (signed char)-63;
unsigned char var_8 = (unsigned char)125;
short var_13 = (short)16464;
int zero = 0;
unsigned int var_17 = 2340325450U;
unsigned short var_18 = (unsigned short)47174;
void init() {
}

void checksum() {
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
