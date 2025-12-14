#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)43058;
unsigned short var_13 = (unsigned short)1406;
unsigned short var_14 = (unsigned short)55737;
int zero = 0;
long long int var_17 = 2417159013349755451LL;
long long int var_18 = 8838267931887247668LL;
unsigned short var_19 = (unsigned short)54524;
unsigned char var_20 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
