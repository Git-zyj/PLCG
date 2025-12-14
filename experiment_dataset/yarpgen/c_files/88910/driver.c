#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 787125825;
unsigned long long int var_13 = 9905760874838473381ULL;
int zero = 0;
long long int var_17 = -4816029180521879044LL;
long long int var_18 = -3714472369509983605LL;
unsigned int var_19 = 4294498542U;
long long int var_20 = -144879074542797514LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
