#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)-68;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 755510000164075608ULL;
unsigned char var_16 = (unsigned char)37;
unsigned long long int var_17 = 1630136545846340049ULL;
int zero = 0;
unsigned long long int var_18 = 13617708189966934977ULL;
unsigned int var_19 = 3389702718U;
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
