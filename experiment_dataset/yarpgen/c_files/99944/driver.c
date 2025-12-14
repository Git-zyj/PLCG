#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)13650;
unsigned char var_7 = (unsigned char)96;
long long int var_9 = -5860321373526462553LL;
unsigned int var_10 = 3741590430U;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 1292471716U;
int zero = 0;
long long int var_18 = -8210449516024720770LL;
long long int var_19 = 6499115948386625872LL;
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
