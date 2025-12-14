#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7139291484248889895LL;
long long int var_4 = 8828320010248944040LL;
long long int var_7 = 3671536575470649623LL;
unsigned int var_9 = 1686016335U;
signed char var_14 = (signed char)31;
signed char var_17 = (signed char)51;
unsigned int var_18 = 2956695818U;
int zero = 0;
unsigned int var_19 = 666512030U;
unsigned long long int var_20 = 455452995919072801ULL;
void init() {
}

void checksum() {
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
