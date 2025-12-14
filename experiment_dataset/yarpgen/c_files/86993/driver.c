#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3777;
int var_3 = -1522244828;
unsigned short var_5 = (unsigned short)62561;
unsigned long long int var_7 = 9663371019876869624ULL;
unsigned long long int var_8 = 2172577860474415971ULL;
unsigned short var_11 = (unsigned short)58265;
int zero = 0;
unsigned long long int var_16 = 11562263308676125370ULL;
unsigned long long int var_17 = 12920873383303969025ULL;
void init() {
}

void checksum() {
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
