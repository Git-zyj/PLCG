#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
long long int var_1 = 1896431372607993338LL;
int var_3 = 688235968;
unsigned char var_4 = (unsigned char)178;
long long int var_6 = 5629570472751700357LL;
signed char var_7 = (signed char)58;
long long int var_8 = -862484664258804216LL;
int var_10 = 588194010;
unsigned long long int var_11 = 15643340281092853606ULL;
long long int var_13 = -5234039800910524384LL;
int var_14 = -1281502022;
int zero = 0;
unsigned long long int var_16 = 7733960784314467133ULL;
int var_17 = 537933029;
long long int var_18 = 8082254570091890966LL;
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
