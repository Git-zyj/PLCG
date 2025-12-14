#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)86;
long long int var_4 = 5260406451724639175LL;
long long int var_9 = 5704535356061315035LL;
int zero = 0;
unsigned short var_10 = (unsigned short)13079;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)16112;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
