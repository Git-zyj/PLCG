#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3627640674U;
short var_9 = (short)2704;
unsigned char var_13 = (unsigned char)76;
long long int var_14 = 1253716424891387803LL;
int zero = 0;
unsigned char var_15 = (unsigned char)167;
long long int var_16 = -4213998889146435386LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
