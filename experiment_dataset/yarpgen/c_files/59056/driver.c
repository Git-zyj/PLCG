#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -88445843;
long long int var_5 = -6753763323775113432LL;
unsigned int var_6 = 1319790579U;
unsigned short var_13 = (unsigned short)9304;
int zero = 0;
signed char var_14 = (signed char)52;
unsigned int var_15 = 20161429U;
long long int var_16 = -2278727344112571563LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
