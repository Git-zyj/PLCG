#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_15 = 2114573580;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-92;
int zero = 0;
unsigned short var_19 = (unsigned short)6031;
unsigned long long int var_20 = 1114056571225225790ULL;
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
