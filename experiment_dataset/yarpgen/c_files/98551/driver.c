#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18412177526798159069ULL;
short var_5 = (short)28038;
signed char var_12 = (signed char)2;
long long int var_14 = -804431459407960947LL;
int zero = 0;
unsigned short var_18 = (unsigned short)6369;
short var_19 = (short)24853;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
