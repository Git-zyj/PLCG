#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2829099007659836576LL;
unsigned short var_5 = (unsigned short)46311;
int var_9 = 49864042;
signed char var_12 = (signed char)-4;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-6368;
unsigned int var_16 = 1145510494U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
