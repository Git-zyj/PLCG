#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2179826881U;
unsigned long long int var_2 = 6695980619673100255ULL;
int var_3 = 479137515;
unsigned char var_4 = (unsigned char)218;
long long int var_8 = -1104981635375222864LL;
int zero = 0;
unsigned char var_14 = (unsigned char)115;
long long int var_15 = -943581960232816897LL;
signed char var_16 = (signed char)-66;
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
