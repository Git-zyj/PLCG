#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18334640121815961408ULL;
long long int var_2 = -6143753900040976436LL;
long long int var_3 = -8749356155857133454LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 8853595172809232379LL;
unsigned long long int var_11 = 2966303799133283707ULL;
unsigned char var_16 = (unsigned char)24;
int zero = 0;
long long int var_17 = 552672283663491000LL;
unsigned char var_18 = (unsigned char)234;
long long int var_19 = 8033835284133476716LL;
unsigned long long int var_20 = 9141832434455270487ULL;
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
