#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2779330792U;
int var_3 = 2072487479;
unsigned int var_6 = 1693129562U;
signed char var_9 = (signed char)23;
int zero = 0;
int var_15 = -383771299;
unsigned int var_16 = 4198322407U;
_Bool var_17 = (_Bool)0;
int var_18 = -1098958531;
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
