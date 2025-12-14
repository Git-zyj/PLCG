#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)31;
unsigned char var_9 = (unsigned char)239;
long long int var_10 = 2588167172786971033LL;
long long int var_13 = 5890376160069779574LL;
unsigned int var_15 = 2920787938U;
long long int var_16 = 7285882833304780036LL;
int zero = 0;
unsigned char var_17 = (unsigned char)117;
unsigned int var_18 = 614976091U;
unsigned char var_19 = (unsigned char)27;
long long int var_20 = 6628928257020066015LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
