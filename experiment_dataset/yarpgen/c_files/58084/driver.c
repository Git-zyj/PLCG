#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5884735575932815958ULL;
short var_4 = (short)-8861;
short var_7 = (short)-28389;
short var_8 = (short)-25090;
short var_10 = (short)-23932;
unsigned char var_11 = (unsigned char)239;
unsigned long long int var_13 = 7129239182075853903ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_18 = 11784621695808335067ULL;
int zero = 0;
unsigned long long int var_19 = 10545708205019300291ULL;
unsigned long long int var_20 = 13558546988079388038ULL;
short var_21 = (short)22867;
int var_22 = 127484482;
long long int var_23 = 3132177084643770460LL;
unsigned char var_24 = (unsigned char)48;
unsigned char var_25 = (unsigned char)220;
unsigned int var_26 = 3480754171U;
_Bool var_27 = (_Bool)0;
short var_28 = (short)-24780;
int var_29 = 362356336;
int var_30 = 1225574037;
_Bool var_31 = (_Bool)0;
int var_32 = -1042509224;
int var_33 = -1870709751;
unsigned char arr_1 [25] [25] ;
_Bool arr_2 [25] [25] ;
unsigned char arr_5 [19] ;
short arr_7 [24] ;
_Bool arr_8 [24] ;
unsigned char arr_9 [24] ;
unsigned char arr_13 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)6 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (short)28827;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)144;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
