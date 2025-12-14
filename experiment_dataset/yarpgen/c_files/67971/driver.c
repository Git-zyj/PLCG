#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11294417770209973058ULL;
long long int var_2 = -8931508707812325076LL;
unsigned int var_3 = 756115142U;
int var_4 = 1905544776;
unsigned int var_8 = 2087912633U;
signed char var_11 = (signed char)112;
int zero = 0;
unsigned long long int var_13 = 11142121458028285370ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
