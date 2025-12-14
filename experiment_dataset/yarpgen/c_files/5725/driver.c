#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7267591921387886915LL;
unsigned long long int var_4 = 8708019623901584572ULL;
short var_7 = (short)13219;
signed char var_8 = (signed char)13;
int var_11 = -656689263;
long long int var_12 = 1380350939155738921LL;
int zero = 0;
unsigned int var_15 = 3005561956U;
long long int var_16 = 3663918147997145044LL;
unsigned int var_17 = 37257246U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
