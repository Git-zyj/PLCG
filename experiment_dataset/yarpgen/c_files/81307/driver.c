#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15261130133908352388ULL;
unsigned int var_2 = 563354561U;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-102;
signed char var_7 = (signed char)-61;
long long int var_8 = 7486765294411008168LL;
unsigned short var_9 = (unsigned short)30780;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2611058364U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 16243628197284028999ULL;
int var_14 = -1748038890;
long long int var_15 = -3966188982057497235LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
