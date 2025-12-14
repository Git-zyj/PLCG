#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58215;
unsigned int var_2 = 441285611U;
unsigned long long int var_11 = 593264411279789912ULL;
long long int var_12 = -8979234241047596534LL;
unsigned char var_13 = (unsigned char)131;
int zero = 0;
int var_16 = -1951602846;
short var_17 = (short)-27588;
unsigned int var_18 = 3219655867U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
