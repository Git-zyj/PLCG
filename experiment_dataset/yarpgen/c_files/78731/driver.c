#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17325;
unsigned char var_2 = (unsigned char)36;
unsigned long long int var_3 = 11417726395991898140ULL;
short var_5 = (short)14829;
int var_7 = 1173298799;
int zero = 0;
unsigned char var_13 = (unsigned char)209;
short var_14 = (short)-7374;
unsigned char var_15 = (unsigned char)125;
short var_16 = (short)-30611;
long long int var_17 = -8392509753257555918LL;
int var_18 = -1624524777;
unsigned short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)7459;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
