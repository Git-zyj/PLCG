#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)14114;
short var_6 = (short)-19068;
signed char var_8 = (signed char)-43;
int var_14 = -1138547818;
int zero = 0;
long long int var_16 = -5772604528441612275LL;
signed char var_17 = (signed char)117;
void init() {
}

void checksum() {
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
