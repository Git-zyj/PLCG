#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1092169424390320128LL;
unsigned short var_2 = (unsigned short)32926;
int var_6 = 1146509880;
_Bool var_12 = (_Bool)0;
int var_15 = 1858048341;
unsigned long long int var_16 = 17323052965229178031ULL;
int zero = 0;
int var_17 = 124288102;
unsigned char var_18 = (unsigned char)188;
void init() {
}

void checksum() {
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
