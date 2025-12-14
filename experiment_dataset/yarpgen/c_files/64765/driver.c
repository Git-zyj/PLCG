#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1244602441;
long long int var_4 = 4586621326130181419LL;
unsigned int var_5 = 3207274U;
int var_6 = -1832214260;
signed char var_7 = (signed char)-100;
long long int var_8 = -6533839733324795304LL;
_Bool var_10 = (_Bool)0;
long long int var_14 = 3118652096269548029LL;
unsigned long long int var_15 = 17264255292946459499ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)23;
unsigned int var_19 = 3067882427U;
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
