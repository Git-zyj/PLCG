#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1644475922U;
signed char var_3 = (signed char)-8;
unsigned int var_4 = 3309394615U;
long long int var_7 = 5621125327535026872LL;
unsigned long long int var_9 = 14971085065477678118ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)108;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
