#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8095;
unsigned char var_5 = (unsigned char)146;
long long int var_10 = -9067837419453109390LL;
int var_11 = 43234011;
signed char var_12 = (signed char)-56;
int zero = 0;
int var_13 = -379655697;
int var_14 = -381734023;
unsigned short var_15 = (unsigned short)16206;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
