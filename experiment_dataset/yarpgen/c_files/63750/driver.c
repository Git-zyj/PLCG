#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8217598639862800661LL;
long long int var_10 = -2968750115728507197LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2316248922U;
unsigned int var_13 = 4281936403U;
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
