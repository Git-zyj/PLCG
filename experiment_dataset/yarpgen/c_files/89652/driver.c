#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 883556010220766783ULL;
signed char var_4 = (signed char)-114;
short var_5 = (short)-3452;
unsigned int var_8 = 2776246403U;
unsigned int var_13 = 2102853442U;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)12211;
unsigned long long int var_21 = 6052785096379688818ULL;
_Bool var_22 = (_Bool)1;
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
