#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7609368398172122925LL;
long long int var_7 = 5480590627266609550LL;
long long int var_8 = 3336502753251802626LL;
unsigned int var_9 = 2946990268U;
unsigned int var_12 = 3012278527U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2196162145286879748LL;
int zero = 0;
long long int var_16 = -9097079156547019585LL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
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
