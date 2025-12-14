#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12709335146953856230ULL;
unsigned long long int var_3 = 13940830462477924172ULL;
short var_4 = (short)-5196;
short var_6 = (short)10954;
short var_7 = (short)-14947;
short var_8 = (short)-26979;
unsigned long long int var_9 = 17573123084646158296ULL;
short var_10 = (short)30921;
short var_11 = (short)-16247;
unsigned long long int var_12 = 11562443976497661664ULL;
short var_13 = (short)23326;
int zero = 0;
short var_16 = (short)-19342;
short var_17 = (short)-25073;
short var_18 = (short)-11900;
short var_19 = (short)25886;
short var_20 = (short)659;
unsigned long long int arr_2 [18] [18] ;
unsigned long long int arr_5 [18] ;
short arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 4892956742982321091ULL : 15531910495860112629ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 15150191286221719799ULL : 7861525420211098736ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-11537 : (short)15472;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
