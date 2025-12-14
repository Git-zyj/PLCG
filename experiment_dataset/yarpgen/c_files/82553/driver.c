#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 243707804U;
_Bool var_4 = (_Bool)1;
short var_9 = (short)29963;
unsigned short var_10 = (unsigned short)45375;
unsigned int var_14 = 3530319715U;
short var_15 = (short)15666;
int zero = 0;
long long int var_16 = 7662091366876414783LL;
int var_17 = 73960365;
unsigned short var_18 = (unsigned short)48791;
unsigned short var_19 = (unsigned short)51710;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
