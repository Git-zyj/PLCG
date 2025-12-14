#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24892;
int var_5 = 1231498037;
long long int var_8 = 3295873220033038265LL;
int var_13 = -570696352;
int zero = 0;
long long int var_19 = 3287710349236031583LL;
int var_20 = 253621902;
void init() {
}

void checksum() {
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
