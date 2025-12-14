#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)241;
int var_10 = -1825932634;
int zero = 0;
unsigned char var_19 = (unsigned char)115;
long long int var_20 = -6484632584072447032LL;
unsigned char var_21 = (unsigned char)12;
long long int var_22 = -2996617281306451961LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
