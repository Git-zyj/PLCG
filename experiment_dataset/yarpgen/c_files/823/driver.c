#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1004743524;
long long int var_9 = -7511504633760147865LL;
short var_10 = (short)-30743;
unsigned int var_12 = 1840454887U;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -9127608671130215242LL;
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
