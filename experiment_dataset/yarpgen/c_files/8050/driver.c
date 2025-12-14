#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)675;
long long int var_3 = -5723114742600337303LL;
unsigned int var_11 = 3309191975U;
unsigned short var_12 = (unsigned short)13984;
int zero = 0;
unsigned short var_15 = (unsigned short)18546;
int var_16 = -1360856801;
unsigned int var_17 = 826995069U;
unsigned int var_18 = 2011148234U;
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
