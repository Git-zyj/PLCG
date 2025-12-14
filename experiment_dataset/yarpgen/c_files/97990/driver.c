#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 7093437960090443009ULL;
signed char var_8 = (signed char)123;
int zero = 0;
long long int var_12 = 3713050149718760037LL;
unsigned long long int var_13 = 10045698555463693983ULL;
unsigned short var_14 = (unsigned short)59519;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
