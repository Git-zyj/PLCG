#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 403764453418600892ULL;
unsigned int var_7 = 956921442U;
unsigned short var_9 = (unsigned short)33502;
int zero = 0;
unsigned int var_12 = 2392012243U;
unsigned long long int var_13 = 17672506130071193786ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
