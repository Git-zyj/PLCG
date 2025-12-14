#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16923;
long long int var_9 = -6447873446601490067LL;
long long int var_15 = 2090578458179279291LL;
int zero = 0;
long long int var_16 = 5624267674900911613LL;
signed char var_17 = (signed char)75;
unsigned int var_18 = 2487481738U;
void init() {
}

void checksum() {
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
