#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17953;
long long int var_3 = -3638567447263907735LL;
unsigned short var_4 = (unsigned short)30719;
long long int var_6 = 4497389113924377953LL;
long long int var_10 = 6081946642478581604LL;
unsigned char var_14 = (unsigned char)165;
int zero = 0;
long long int var_16 = 174531169430867147LL;
unsigned int var_17 = 1872430947U;
signed char var_18 = (signed char)-113;
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
