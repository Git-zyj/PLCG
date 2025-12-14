#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
int var_1 = 1329966368;
unsigned char var_2 = (unsigned char)11;
int var_6 = -1703475059;
int var_8 = -586495406;
unsigned int var_10 = 3228939133U;
int zero = 0;
int var_13 = 629759079;
int var_14 = -283225176;
unsigned int var_15 = 2399737757U;
unsigned int var_16 = 1933517641U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
