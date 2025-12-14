#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
signed char var_1 = (signed char)78;
unsigned long long int var_5 = 11435831529882295406ULL;
unsigned long long int var_7 = 16367232882072554108ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)55178;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
