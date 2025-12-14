#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 505949472U;
long long int var_12 = 3113794991979028177LL;
int var_15 = -1814460675;
int zero = 0;
long long int var_18 = -6768242320790934829LL;
unsigned int var_19 = 3942476822U;
unsigned long long int var_20 = 15702283646974961645ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
