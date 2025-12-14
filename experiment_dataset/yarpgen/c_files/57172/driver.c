#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16955587691548067361ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 10947620420217461454ULL;
int zero = 0;
unsigned long long int var_11 = 5372291551814099039ULL;
unsigned long long int var_12 = 1336504690920670051ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
