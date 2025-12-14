#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1813453242636447532LL;
int var_6 = -1015420065;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 2417277894U;
unsigned long long int var_13 = 5641536243065162643ULL;
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
