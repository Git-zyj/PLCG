#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)43;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)23225;
unsigned char var_14 = (unsigned char)191;
unsigned char var_16 = (unsigned char)107;
int zero = 0;
int var_18 = -32295075;
unsigned char var_19 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
