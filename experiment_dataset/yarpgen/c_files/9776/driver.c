#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1690353647;
signed char var_3 = (signed char)-14;
unsigned char var_7 = (unsigned char)22;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 14917046869649260129ULL;
long long int var_11 = -6499468675115381793LL;
short var_12 = (short)295;
int var_14 = -1191061853;
int zero = 0;
int var_15 = 1340584228;
unsigned long long int var_16 = 9773255656029771409ULL;
unsigned long long int var_17 = 16035210217552951117ULL;
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
