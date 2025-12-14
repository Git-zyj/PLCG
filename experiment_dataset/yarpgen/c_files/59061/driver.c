#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29666;
unsigned short var_8 = (unsigned short)35141;
short var_10 = (short)-22349;
unsigned int var_15 = 1653785869U;
int zero = 0;
unsigned short var_17 = (unsigned short)50295;
short var_18 = (short)4625;
void init() {
}

void checksum() {
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
