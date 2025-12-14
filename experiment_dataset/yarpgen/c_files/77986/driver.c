#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)88;
unsigned int var_5 = 55991968U;
unsigned char var_6 = (unsigned char)113;
int var_9 = 2144963856;
int var_10 = -176165626;
unsigned long long int var_14 = 6312849497347065915ULL;
int zero = 0;
short var_18 = (short)30663;
unsigned long long int var_19 = 13286657568414955900ULL;
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
