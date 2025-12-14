#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -266565137536751487LL;
unsigned int var_4 = 4159436573U;
signed char var_5 = (signed char)3;
int var_9 = -836432297;
unsigned char var_12 = (unsigned char)24;
signed char var_13 = (signed char)-39;
int zero = 0;
signed char var_15 = (signed char)127;
signed char var_16 = (signed char)-77;
unsigned int var_17 = 1928698484U;
signed char var_18 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
