#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33434;
unsigned char var_3 = (unsigned char)77;
unsigned long long int var_6 = 14725144851310231595ULL;
signed char var_8 = (signed char)-55;
unsigned long long int var_10 = 12177031588864897318ULL;
unsigned int var_13 = 890658574U;
int zero = 0;
long long int var_15 = 2855312745876898654LL;
unsigned short var_16 = (unsigned short)24845;
unsigned long long int var_17 = 17621266691037146115ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
