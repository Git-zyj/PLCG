#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2038731248;
unsigned long long int var_2 = 11299982768413255160ULL;
signed char var_4 = (signed char)-49;
long long int var_10 = 209580797978678810LL;
long long int var_12 = -7013607796029908877LL;
int var_13 = 849514151;
int zero = 0;
unsigned short var_14 = (unsigned short)8856;
unsigned long long int var_15 = 13793660728383627542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
