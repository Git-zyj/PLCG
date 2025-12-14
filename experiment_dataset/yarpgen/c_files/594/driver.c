#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8650167447972619210LL;
long long int var_2 = -5670824574003898413LL;
short var_8 = (short)30702;
unsigned int var_9 = 1964277237U;
unsigned int var_13 = 631876671U;
signed char var_15 = (signed char)88;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1803805662U;
unsigned char var_20 = (unsigned char)25;
unsigned long long int var_21 = 7601600902611444846ULL;
void init() {
}

void checksum() {
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
