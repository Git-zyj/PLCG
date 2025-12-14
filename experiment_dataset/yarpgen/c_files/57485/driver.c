#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9050868862418476615ULL;
int var_5 = -231303620;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)3;
int zero = 0;
signed char var_18 = (signed char)-59;
unsigned char var_19 = (unsigned char)234;
void init() {
}

void checksum() {
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
