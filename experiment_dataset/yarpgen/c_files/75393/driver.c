#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -150583973;
unsigned char var_2 = (unsigned char)222;
unsigned short var_7 = (unsigned short)54394;
unsigned char var_13 = (unsigned char)239;
unsigned char var_15 = (unsigned char)104;
int zero = 0;
unsigned int var_16 = 961621355U;
unsigned short var_17 = (unsigned short)50620;
unsigned long long int var_18 = 421297783340473290ULL;
void init() {
}

void checksum() {
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
