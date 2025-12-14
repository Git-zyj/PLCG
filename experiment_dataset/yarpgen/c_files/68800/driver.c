#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3643718127U;
short var_2 = (short)9661;
unsigned long long int var_11 = 14330387307391543952ULL;
int zero = 0;
unsigned int var_15 = 2243164127U;
unsigned long long int var_16 = 8503751110275197122ULL;
signed char var_17 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
