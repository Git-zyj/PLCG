#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3991652350403051828ULL;
unsigned short var_4 = (unsigned short)36343;
unsigned char var_5 = (unsigned char)7;
int var_6 = -1581275110;
int var_11 = -1449205989;
int zero = 0;
unsigned long long int var_14 = 9122656701179065926ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
