#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1976329543891248829ULL;
unsigned char var_1 = (unsigned char)248;
unsigned char var_3 = (unsigned char)195;
unsigned char var_6 = (unsigned char)30;
unsigned long long int var_13 = 17654317851667891408ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)215;
unsigned long long int var_20 = 14793761690338064249ULL;
signed char var_21 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
