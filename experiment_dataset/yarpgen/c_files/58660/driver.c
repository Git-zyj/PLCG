#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -8729033;
int var_1 = 1413941269;
int var_2 = -2121112789;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)84;
signed char var_9 = (signed char)94;
long long int var_10 = 3851068097560455530LL;
long long int var_11 = -1729863977652336190LL;
signed char var_12 = (signed char)-85;
signed char var_14 = (signed char)-86;
int zero = 0;
signed char var_15 = (signed char)-56;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
