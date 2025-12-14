#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1209244512;
_Bool var_5 = (_Bool)1;
short var_14 = (short)12644;
int zero = 0;
signed char var_17 = (signed char)-61;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 16496151991453750517ULL;
void init() {
}

void checksum() {
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
