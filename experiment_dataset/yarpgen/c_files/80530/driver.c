#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)159;
unsigned long long int var_2 = 4209065908660292076ULL;
int var_3 = 1609909167;
short var_7 = (short)7135;
int zero = 0;
long long int var_11 = -3768458058397206659LL;
long long int var_12 = -1686541871254429041LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
