#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -8748239251785232844LL;
unsigned short var_10 = (unsigned short)25042;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1905342650363118151LL;
unsigned int var_18 = 3580146977U;
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
