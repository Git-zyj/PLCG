#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
unsigned int var_4 = 3762197579U;
signed char var_5 = (signed char)-91;
unsigned long long int var_6 = 14166439466708479978ULL;
signed char var_7 = (signed char)114;
int zero = 0;
long long int var_14 = 2131686529635466723LL;
unsigned int var_15 = 3990969096U;
unsigned char var_16 = (unsigned char)212;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
