#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)16688;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 12014910797094108489ULL;
signed char var_20 = (signed char)96;
signed char var_21 = (signed char)98;
unsigned long long int var_22 = 4711392113058827138ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
