#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63757;
unsigned int var_4 = 1249782742U;
unsigned char var_7 = (unsigned char)74;
unsigned long long int var_14 = 8169905360227888633ULL;
int zero = 0;
unsigned int var_15 = 1049290535U;
unsigned long long int var_16 = 16031729444544329780ULL;
unsigned long long int var_17 = 17032960681339330463ULL;
unsigned long long int var_18 = 6184329254399272281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
