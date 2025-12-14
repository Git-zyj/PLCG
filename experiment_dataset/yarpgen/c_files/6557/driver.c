#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 7917823601139555560ULL;
unsigned long long int var_13 = 922458989748953929ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)30621;
unsigned long long int var_18 = 2443477058805655257ULL;
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
