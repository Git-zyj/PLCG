#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10550544441229581581ULL;
signed char var_8 = (signed char)24;
unsigned long long int var_9 = 8338999549754757868ULL;
int var_10 = 1900232784;
int zero = 0;
int var_11 = -569491487;
long long int var_12 = -3225063527878475120LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
