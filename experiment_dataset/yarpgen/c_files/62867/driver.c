#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)19801;
int var_13 = 48976192;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-49;
signed char var_21 = (signed char)-19;
long long int var_22 = 6973473639774302400LL;
void init() {
}

void checksum() {
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
