#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9960446656168411142ULL;
unsigned long long int var_8 = 14714360792687112582ULL;
unsigned long long int var_18 = 8428692559127997404ULL;
int zero = 0;
short var_20 = (short)1316;
short var_21 = (short)-2114;
unsigned long long int var_22 = 1424774488408894509ULL;
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
