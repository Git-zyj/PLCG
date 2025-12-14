#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
long long int var_1 = 1214210001368943830LL;
unsigned short var_3 = (unsigned short)29782;
unsigned short var_7 = (unsigned short)11525;
unsigned int var_8 = 3773078111U;
int var_9 = -1477952605;
unsigned int var_12 = 419480082U;
unsigned long long int var_13 = 7688982483103876254ULL;
unsigned short var_15 = (unsigned short)1715;
int zero = 0;
long long int var_17 = 5109171220928225536LL;
_Bool var_18 = (_Bool)0;
int var_19 = -987619002;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
