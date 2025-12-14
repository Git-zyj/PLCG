#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)56813;
unsigned char var_4 = (unsigned char)51;
long long int var_5 = 5237874579931105343LL;
long long int var_6 = -8113466525643026525LL;
unsigned char var_8 = (unsigned char)13;
unsigned short var_10 = (unsigned short)38154;
unsigned char var_12 = (unsigned char)240;
unsigned short var_14 = (unsigned short)17195;
long long int var_16 = 2559843792816982254LL;
int zero = 0;
long long int var_19 = 891081981625312013LL;
unsigned short var_20 = (unsigned short)47561;
void init() {
}

void checksum() {
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
