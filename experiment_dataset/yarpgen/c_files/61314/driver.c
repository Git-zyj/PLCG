#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)76;
long long int var_9 = -8952161484821961257LL;
int zero = 0;
unsigned long long int var_10 = 6482036758850953850ULL;
long long int var_11 = -3373245299922118512LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
