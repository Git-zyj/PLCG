#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3820936050U;
unsigned int var_3 = 1357245311U;
unsigned int var_5 = 2381223689U;
int var_9 = 1367106029;
int var_14 = -1144636882;
int zero = 0;
signed char var_15 = (signed char)16;
unsigned char var_16 = (unsigned char)233;
unsigned int var_17 = 1291789636U;
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
