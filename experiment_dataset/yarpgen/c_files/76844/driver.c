#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4518329253269991168LL;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 3800065973U;
int zero = 0;
unsigned int var_15 = 332028047U;
unsigned long long int var_16 = 17808486468516994764ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
