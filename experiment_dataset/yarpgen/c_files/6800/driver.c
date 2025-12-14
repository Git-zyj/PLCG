#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)78;
signed char var_6 = (signed char)40;
short var_8 = (short)-19252;
short var_9 = (short)3816;
long long int var_13 = -5651718368068359750LL;
int var_14 = 1888403231;
int zero = 0;
unsigned long long int var_15 = 7740403679587225210ULL;
long long int var_16 = -6191397855587052256LL;
unsigned int var_17 = 4254148175U;
unsigned char var_18 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
