#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2063296063;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)5;
signed char var_11 = (signed char)-21;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 1745797729427493317ULL;
long long int var_14 = 7968316673559029620LL;
long long int var_15 = -6165636050385343392LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
