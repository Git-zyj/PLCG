#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15864504586368280082ULL;
unsigned int var_4 = 2298035177U;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 2992058397U;
int zero = 0;
unsigned long long int var_20 = 11433111269769465769ULL;
short var_21 = (short)12337;
signed char var_22 = (signed char)-6;
unsigned int var_23 = 2835940278U;
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
