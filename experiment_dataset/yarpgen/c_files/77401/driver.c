#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-108;
unsigned long long int var_3 = 4422186829150062687ULL;
unsigned long long int var_13 = 3824984795041994043ULL;
_Bool var_14 = (_Bool)1;
int var_17 = -1535672262;
int zero = 0;
unsigned char var_20 = (unsigned char)141;
unsigned short var_21 = (unsigned short)5568;
unsigned char var_22 = (unsigned char)13;
unsigned short var_23 = (unsigned short)8564;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
