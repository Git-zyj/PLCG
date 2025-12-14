#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51521;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 2609402558781783594ULL;
signed char var_11 = (signed char)-62;
unsigned int var_12 = 3855892192U;
unsigned int var_14 = 2466792067U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 4290052154195942390LL;
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
