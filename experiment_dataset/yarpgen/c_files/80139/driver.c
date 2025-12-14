#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned int var_5 = 1404054934U;
unsigned short var_11 = (unsigned short)14670;
unsigned short var_16 = (unsigned short)8310;
int var_17 = -851038694;
int zero = 0;
int var_19 = 58822730;
long long int var_20 = 8066088421296594896LL;
unsigned long long int var_21 = 14135238768103696329ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
