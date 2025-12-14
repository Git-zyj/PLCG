#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1334089457U;
unsigned long long int var_11 = 8559647581800373685ULL;
int var_13 = -1505207798;
long long int var_15 = 6369404800172761078LL;
unsigned short var_16 = (unsigned short)11550;
int zero = 0;
int var_17 = 1829652294;
signed char var_18 = (signed char)93;
unsigned int var_19 = 2970649378U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
