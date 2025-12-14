#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
unsigned int var_4 = 3536140329U;
unsigned int var_5 = 2466510239U;
signed char var_6 = (signed char)6;
signed char var_10 = (signed char)49;
unsigned long long int var_15 = 6370885448774745055ULL;
int zero = 0;
signed char var_17 = (signed char)83;
signed char var_18 = (signed char)-106;
unsigned long long int var_19 = 8264434148778153674ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
