#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_6 = (short)12447;
unsigned int var_7 = 1400559044U;
short var_13 = (short)4944;
int zero = 0;
short var_18 = (short)23790;
long long int var_19 = -6697759471176469193LL;
unsigned long long int var_20 = 6055651990247289993ULL;
long long int var_21 = -7374555094143380209LL;
short var_22 = (short)-27032;
int var_23 = -752844456;
short var_24 = (short)-29192;
int var_25 = -1547315984;
unsigned char arr_0 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)92 : (unsigned char)4;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
