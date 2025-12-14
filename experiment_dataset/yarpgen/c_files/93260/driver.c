#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12634001523327274196ULL;
unsigned int var_4 = 591743271U;
unsigned char var_7 = (unsigned char)110;
long long int var_8 = 4619555948245403042LL;
signed char var_10 = (signed char)9;
unsigned short var_16 = (unsigned short)28170;
int zero = 0;
unsigned long long int var_19 = 17418155075858254856ULL;
unsigned long long int var_20 = 2025920107880339414ULL;
unsigned char var_21 = (unsigned char)53;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1946137906U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
