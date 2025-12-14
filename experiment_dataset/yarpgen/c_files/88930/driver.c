#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
signed char var_14 = (signed char)23;
long long int var_16 = -8419399742048192950LL;
int zero = 0;
unsigned long long int var_17 = 14900990800222617777ULL;
unsigned int var_18 = 2099695317U;
unsigned char var_19 = (unsigned char)183;
unsigned short var_20 = (unsigned short)36490;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
