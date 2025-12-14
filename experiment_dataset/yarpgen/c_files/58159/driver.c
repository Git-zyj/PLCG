#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62458;
unsigned short var_4 = (unsigned short)59243;
unsigned char var_6 = (unsigned char)107;
int var_7 = 1832061565;
unsigned long long int var_8 = 17066728834129662752ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11201756551364793352ULL;
long long int var_12 = 1528135165211710717LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
