#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)45;
short var_4 = (short)-16555;
long long int var_5 = 1165281928935746987LL;
long long int var_10 = -7167011617621115234LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)53;
unsigned int var_15 = 3265796219U;
void init() {
}

void checksum() {
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
