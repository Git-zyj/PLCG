#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10446;
int var_3 = 362842123;
unsigned short var_4 = (unsigned short)12550;
long long int var_7 = 5321234510014739341LL;
short var_13 = (short)19581;
unsigned short var_14 = (unsigned short)38877;
long long int var_15 = 3745949227630525892LL;
long long int var_17 = -1592108138269262555LL;
int zero = 0;
short var_18 = (short)18380;
long long int var_19 = 7895860516414056618LL;
unsigned long long int var_20 = 1368429302345330367ULL;
long long int var_21 = -9070863089998868780LL;
unsigned short var_22 = (unsigned short)11203;
long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5001476089897976195LL : 6211835391740514248LL;
}

void checksum() {
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
