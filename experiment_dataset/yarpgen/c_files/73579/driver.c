#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2663517099803506242ULL;
long long int var_4 = 8738812040612921695LL;
_Bool var_9 = (_Bool)0;
unsigned int var_15 = 1818925819U;
unsigned int var_16 = 3239657848U;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 1735520547816929487LL;
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
