#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 4071005830011598766ULL;
unsigned char var_5 = (unsigned char)97;
unsigned char var_6 = (unsigned char)87;
unsigned short var_7 = (unsigned short)39302;
unsigned short var_8 = (unsigned short)3683;
long long int var_9 = 2405696800910995378LL;
int zero = 0;
signed char var_14 = (signed char)97;
int var_15 = -1724985404;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
