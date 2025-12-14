#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3847634909U;
int var_1 = -170504728;
long long int var_5 = 3949040833824086049LL;
long long int var_13 = 6276660991444100580LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)71;
int var_18 = 2048675800;
void init() {
}

void checksum() {
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
