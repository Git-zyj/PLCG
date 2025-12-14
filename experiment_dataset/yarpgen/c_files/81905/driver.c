#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60086;
unsigned int var_3 = 739028246U;
unsigned long long int var_4 = 5642811089909859346ULL;
long long int var_5 = 439642357101172170LL;
signed char var_6 = (signed char)108;
unsigned long long int var_8 = 4546312410501374458ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 57158313U;
long long int var_14 = 4950197671301357965LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 6694507391518414621LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
