#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 13541346533399884949ULL;
unsigned short var_8 = (unsigned short)20655;
int var_10 = -331259477;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)97;
unsigned char var_17 = (unsigned char)99;
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
