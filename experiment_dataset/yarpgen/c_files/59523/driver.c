#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1553396868;
long long int var_13 = 5119772363667337810LL;
int zero = 0;
unsigned int var_15 = 3050961075U;
unsigned short var_16 = (unsigned short)4837;
unsigned int var_17 = 3171366795U;
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
