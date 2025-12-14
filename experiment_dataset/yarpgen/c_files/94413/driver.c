#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)131;
unsigned char var_4 = (unsigned char)247;
unsigned long long int var_8 = 6337422959666480018ULL;
signed char var_9 = (signed char)60;
int zero = 0;
signed char var_11 = (signed char)78;
long long int var_12 = -7513156168312091527LL;
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
