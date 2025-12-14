#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2313634368921662718LL;
long long int var_7 = -3074157018336155971LL;
int zero = 0;
unsigned char var_18 = (unsigned char)221;
unsigned short var_19 = (unsigned short)9532;
signed char var_20 = (signed char)49;
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
