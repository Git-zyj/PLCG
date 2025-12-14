#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -497668541;
unsigned short var_2 = (unsigned short)53256;
long long int var_3 = -6731137833195163550LL;
unsigned short var_4 = (unsigned short)24818;
unsigned int var_10 = 3714852001U;
unsigned long long int var_13 = 14437273807336860896ULL;
signed char var_14 = (signed char)-64;
unsigned char var_17 = (unsigned char)106;
int zero = 0;
unsigned char var_18 = (unsigned char)68;
unsigned char var_19 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
