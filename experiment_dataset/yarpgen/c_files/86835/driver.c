#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8923917802208335889ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)8476;
unsigned long long int var_9 = 9410369854292179792ULL;
unsigned int var_10 = 3521572754U;
int zero = 0;
int var_11 = 1181202424;
signed char var_12 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
