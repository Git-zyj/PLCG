#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1043606463;
unsigned int var_1 = 2225742288U;
int var_4 = -1122841850;
int var_5 = 206717792;
unsigned long long int var_17 = 16808377363674345228ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)81;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
