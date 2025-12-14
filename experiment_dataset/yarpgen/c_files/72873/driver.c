#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6273535277628828975ULL;
int var_1 = 1769466215;
unsigned short var_4 = (unsigned short)16262;
unsigned short var_10 = (unsigned short)6090;
unsigned char var_12 = (unsigned char)47;
int zero = 0;
unsigned char var_14 = (unsigned char)206;
signed char var_15 = (signed char)55;
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
