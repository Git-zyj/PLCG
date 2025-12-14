#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63527;
unsigned int var_2 = 2119427829U;
short var_4 = (short)24090;
int var_5 = -917909982;
signed char var_6 = (signed char)-64;
unsigned int var_7 = 1708876680U;
unsigned short var_8 = (unsigned short)1473;
_Bool var_9 = (_Bool)0;
int var_10 = -1203349085;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5439151360862444659ULL;
int zero = 0;
unsigned int var_16 = 1676997965U;
unsigned int var_17 = 764719827U;
unsigned int var_18 = 4282843529U;
int var_19 = 1091173184;
int var_20 = 1691661709;
long long int var_21 = -7420729797344827353LL;
long long int var_22 = -7851214344174847233LL;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 813442210U;
unsigned short var_25 = (unsigned short)48803;
unsigned int var_26 = 844655412U;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
unsigned long long int arr_0 [20] ;
_Bool arr_1 [20] ;
unsigned short arr_4 [17] [17] ;
unsigned int arr_7 [17] [17] [17] ;
short arr_8 [17] ;
unsigned int arr_9 [17] [17] ;
unsigned int arr_10 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 5358141227656063906ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)15752 : (unsigned short)46877;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 461800456U : 2401336367U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (short)-4407;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 765703131U : 4214262655U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 622022774U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
