#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_9 = 525143839;
long long int var_15 = 7937919970495094735LL;
int zero = 0;
unsigned char var_16 = (unsigned char)229;
unsigned int var_17 = 195112026U;
int var_18 = 2067746949;
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
