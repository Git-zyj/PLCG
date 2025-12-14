#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)24847;
signed char var_10 = (signed char)122;
long long int var_14 = 7464461832997355054LL;
int zero = 0;
long long int var_15 = 7135860057245886215LL;
unsigned short var_16 = (unsigned short)18971;
unsigned short var_17 = (unsigned short)11161;
long long int var_18 = -4756498732526443013LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
