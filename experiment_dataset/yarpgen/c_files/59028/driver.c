#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_11 = 13865361566032599333ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 798146695U;
unsigned char var_16 = (unsigned char)37;
unsigned short var_17 = (unsigned short)13182;
unsigned long long int var_18 = 7811437726077605055ULL;
signed char var_19 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
