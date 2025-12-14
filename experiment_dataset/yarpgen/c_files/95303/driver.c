#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8279819791669086668ULL;
long long int var_1 = 7992703580195696806LL;
int var_8 = 1812016401;
long long int var_12 = 3415282732609880823LL;
int zero = 0;
long long int var_13 = -1561660627272335736LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3013713658U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
