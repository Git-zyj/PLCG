#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)33;
unsigned int var_3 = 1247712647U;
unsigned long long int var_4 = 11500964268956899643ULL;
unsigned short var_6 = (unsigned short)39227;
unsigned int var_7 = 2687724255U;
unsigned int var_8 = 2803154437U;
_Bool var_11 = (_Bool)0;
long long int var_15 = 3687606367305037686LL;
int zero = 0;
unsigned char var_16 = (unsigned char)103;
int var_17 = 1217937468;
unsigned char var_18 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
