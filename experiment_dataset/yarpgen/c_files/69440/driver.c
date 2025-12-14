#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
unsigned char var_2 = (unsigned char)237;
unsigned char var_8 = (unsigned char)154;
long long int var_10 = -5893409498432184441LL;
long long int var_12 = 8310852161553109745LL;
int zero = 0;
long long int var_13 = -7923968141890899279LL;
int var_14 = 1626038780;
void init() {
}

void checksum() {
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
