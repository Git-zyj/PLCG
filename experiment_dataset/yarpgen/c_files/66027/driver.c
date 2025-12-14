#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 445670206U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)13506;
unsigned long long int var_8 = 14491723675295580771ULL;
int zero = 0;
long long int var_13 = 5950543505562875910LL;
signed char var_14 = (signed char)-75;
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
