#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 5033858083408284933LL;
unsigned char var_5 = (unsigned char)65;
unsigned char var_9 = (unsigned char)134;
long long int var_14 = 5411797265340930564LL;
int zero = 0;
signed char var_15 = (signed char)47;
int var_16 = -1822178577;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
