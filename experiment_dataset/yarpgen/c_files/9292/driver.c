#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned int var_17 = 2810273412U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1144538898U;
signed char var_20 = (signed char)100;
unsigned int var_21 = 2289306067U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
