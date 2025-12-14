#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
long long int var_6 = -7831454531505018623LL;
long long int var_7 = 461830449051279096LL;
_Bool var_10 = (_Bool)0;
long long int var_15 = -7714100855793049907LL;
unsigned int var_16 = 1750448765U;
unsigned int var_17 = 2971504016U;
signed char var_18 = (signed char)23;
int zero = 0;
unsigned int var_19 = 3592479411U;
unsigned short var_20 = (unsigned short)47385;
long long int var_21 = 9037167625187734439LL;
unsigned int var_22 = 2741573619U;
int var_23 = 307652624;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
