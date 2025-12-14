#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
long long int var_5 = -2243860801941453876LL;
unsigned char var_6 = (unsigned char)192;
signed char var_13 = (signed char)-2;
int zero = 0;
short var_19 = (short)-26675;
long long int var_20 = -2114247732640974137LL;
unsigned char var_21 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
