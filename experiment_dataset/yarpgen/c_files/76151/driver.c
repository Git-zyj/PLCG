#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2981249596U;
unsigned int var_7 = 2482068070U;
long long int var_10 = 2816691814643380772LL;
int zero = 0;
int var_18 = 2022410964;
int var_19 = 403556477;
short var_20 = (short)2490;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
