#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)165;
unsigned long long int var_5 = 16535902430382670385ULL;
signed char var_8 = (signed char)68;
unsigned long long int var_10 = 14611088888733098093ULL;
int zero = 0;
int var_11 = -660485674;
short var_12 = (short)14332;
void init() {
}

void checksum() {
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
