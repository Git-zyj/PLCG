#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2139243582267231367ULL;
unsigned char var_1 = (unsigned char)43;
unsigned long long int var_3 = 7093948469297021663ULL;
unsigned char var_4 = (unsigned char)15;
unsigned char var_6 = (unsigned char)133;
unsigned int var_9 = 3769163494U;
unsigned char var_10 = (unsigned char)244;
unsigned long long int var_11 = 15775722740224331874ULL;
int zero = 0;
unsigned int var_12 = 594609106U;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
