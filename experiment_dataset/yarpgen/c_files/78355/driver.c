#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)17625;
_Bool var_9 = (_Bool)1;
long long int var_14 = -3221308082658146456LL;
unsigned long long int var_17 = 13202329900359094554ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)118;
unsigned short var_20 = (unsigned short)6967;
void init() {
}

void checksum() {
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
