#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 14083261107419007357ULL;
int zero = 0;
unsigned int var_19 = 2432847161U;
long long int var_20 = -1220079675370423612LL;
long long int var_21 = 8476118174323843617LL;
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
