#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-123;
unsigned int var_4 = 1651451263U;
long long int var_8 = -629033331490801178LL;
unsigned int var_9 = 22575703U;
signed char var_10 = (signed char)44;
int zero = 0;
short var_11 = (short)20644;
int var_12 = -773270843;
signed char var_13 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
