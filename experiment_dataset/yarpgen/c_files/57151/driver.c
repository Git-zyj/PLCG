#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27143;
_Bool var_5 = (_Bool)0;
int var_6 = -67593006;
unsigned short var_10 = (unsigned short)62929;
int zero = 0;
unsigned char var_13 = (unsigned char)78;
long long int var_14 = -596563350551041196LL;
short var_15 = (short)3104;
long long int var_16 = -968465577238837871LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
