#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2372192861U;
unsigned long long int var_11 = 6543363574174434532ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-73;
unsigned char var_21 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
