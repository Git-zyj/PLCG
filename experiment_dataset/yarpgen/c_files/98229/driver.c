#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-32;
unsigned long long int var_4 = 7417443867176072897ULL;
_Bool var_6 = (_Bool)1;
signed char var_14 = (signed char)-78;
int var_16 = -1333614823;
int zero = 0;
unsigned int var_17 = 119957732U;
unsigned char var_18 = (unsigned char)107;
short var_19 = (short)-13845;
unsigned short var_20 = (unsigned short)63111;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
