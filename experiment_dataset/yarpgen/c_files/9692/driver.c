#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17139;
unsigned long long int var_5 = 17593998231817611660ULL;
long long int var_6 = -6991400414520044901LL;
short var_8 = (short)-16104;
int var_10 = 192674057;
unsigned short var_11 = (unsigned short)5695;
short var_12 = (short)31587;
short var_18 = (short)-6264;
int zero = 0;
short var_20 = (short)-5764;
short var_21 = (short)16787;
unsigned short var_22 = (unsigned short)11455;
short var_23 = (short)-396;
unsigned long long int var_24 = 10997375984581255834ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
