#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2964349942459462647LL;
long long int var_4 = -5778381958363399434LL;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 97805394U;
unsigned long long int var_19 = 2046866819012392147ULL;
unsigned int var_20 = 1013832405U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
