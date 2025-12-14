#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5366386446784139631LL;
unsigned int var_2 = 1769374187U;
unsigned char var_8 = (unsigned char)232;
long long int var_14 = -6004564076791663192LL;
long long int var_15 = 2123131137635178250LL;
unsigned char var_16 = (unsigned char)94;
int zero = 0;
signed char var_20 = (signed char)77;
int var_21 = -1473694332;
int var_22 = 865185671;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
