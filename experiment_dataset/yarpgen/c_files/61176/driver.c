#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-27015;
unsigned char var_15 = (unsigned char)128;
unsigned long long int var_16 = 4025709055075561291ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 16931948591648097921ULL;
long long int var_20 = -3043626490328987426LL;
void init() {
}

void checksum() {
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
