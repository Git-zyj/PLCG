#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7244513526830463239LL;
unsigned short var_5 = (unsigned short)16413;
unsigned int var_7 = 448748057U;
unsigned long long int var_8 = 15109795367769119289ULL;
unsigned short var_9 = (unsigned short)63279;
short var_11 = (short)-2205;
int zero = 0;
unsigned int var_12 = 4194424880U;
int var_13 = 785585297;
unsigned int var_14 = 2180456160U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
