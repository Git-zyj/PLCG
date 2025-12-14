#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8491394751319703378LL;
long long int var_2 = -6051345903234230218LL;
short var_6 = (short)-14769;
int zero = 0;
unsigned short var_17 = (unsigned short)25394;
short var_18 = (short)-3905;
unsigned long long int var_19 = 5401383865337706663ULL;
unsigned char var_20 = (unsigned char)165;
int var_21 = -762601614;
unsigned long long int var_22 = 7353081379466813687ULL;
unsigned short arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)35800;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
