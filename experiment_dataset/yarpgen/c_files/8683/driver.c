#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2360782613U;
int var_3 = 182217430;
signed char var_5 = (signed char)46;
signed char var_6 = (signed char)39;
int var_7 = -1122855140;
int var_8 = -915318028;
long long int var_10 = -8581634430016714062LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)33560;
unsigned int var_17 = 3600926478U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
