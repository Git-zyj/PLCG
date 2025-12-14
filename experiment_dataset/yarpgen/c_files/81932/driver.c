#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1971746923;
unsigned long long int var_3 = 17190728719825648352ULL;
unsigned short var_10 = (unsigned short)19257;
unsigned long long int var_11 = 12881307506701020086ULL;
int var_12 = -695998;
unsigned char var_13 = (unsigned char)179;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 357768244;
void init() {
}

void checksum() {
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
