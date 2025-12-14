#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2314749079U;
_Bool var_5 = (_Bool)1;
unsigned char var_10 = (unsigned char)131;
signed char var_11 = (signed char)-105;
long long int var_12 = -8873262436413014078LL;
int zero = 0;
int var_13 = -1437680676;
long long int var_14 = 3641951079263070230LL;
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
