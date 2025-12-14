#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4014073707U;
unsigned int var_2 = 1638162646U;
unsigned int var_3 = 2729003570U;
unsigned int var_7 = 882496110U;
unsigned int var_8 = 1792150995U;
unsigned int var_9 = 578750117U;
unsigned int var_14 = 883826221U;
int zero = 0;
unsigned int var_15 = 1345947508U;
unsigned int var_16 = 2681078598U;
unsigned int var_17 = 1064390928U;
unsigned int var_18 = 3278941522U;
unsigned int var_19 = 763420456U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
