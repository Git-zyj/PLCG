#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15070783623750359054ULL;
int var_4 = -68131538;
unsigned long long int var_11 = 6333460958299651461ULL;
short var_13 = (short)1297;
int zero = 0;
long long int var_16 = 136601548794708217LL;
short var_17 = (short)-20184;
int var_18 = 757416652;
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
