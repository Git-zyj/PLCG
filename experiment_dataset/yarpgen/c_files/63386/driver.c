#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 453060971;
unsigned short var_10 = (unsigned short)41604;
short var_14 = (short)-15606;
long long int var_16 = -9165849642742311107LL;
int zero = 0;
unsigned long long int var_19 = 13415785519735558821ULL;
short var_20 = (short)3111;
short var_21 = (short)-18689;
void init() {
}

void checksum() {
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
