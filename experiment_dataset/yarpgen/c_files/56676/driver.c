#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1706667563U;
unsigned int var_6 = 2947866957U;
unsigned long long int var_9 = 4301743679836301323ULL;
int var_10 = -1130926515;
int zero = 0;
unsigned long long int var_12 = 18404133521402387562ULL;
signed char var_13 = (signed char)17;
unsigned char var_14 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
