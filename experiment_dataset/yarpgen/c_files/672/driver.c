#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)186;
unsigned long long int var_7 = 3515160450890612991ULL;
short var_15 = (short)-27662;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)53628;
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
