#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1703804097;
int var_7 = 1082218554;
unsigned char var_8 = (unsigned char)101;
unsigned char var_11 = (unsigned char)57;
int var_12 = 1309854403;
int var_13 = -269135444;
int var_17 = -511028825;
int zero = 0;
unsigned char var_18 = (unsigned char)0;
unsigned char var_19 = (unsigned char)114;
int var_20 = -1116209306;
void init() {
}

void checksum() {
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
