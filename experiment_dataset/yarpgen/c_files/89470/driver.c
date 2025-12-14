#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_4 = 4004047884U;
unsigned int var_9 = 3763671083U;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 4155905346220164875ULL;
long long int var_19 = 9046179977452997943LL;
int zero = 0;
signed char var_20 = (signed char)-83;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 7235643227457550520ULL;
signed char var_23 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
