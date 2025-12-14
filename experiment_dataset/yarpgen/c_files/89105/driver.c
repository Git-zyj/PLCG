#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4877;
short var_1 = (short)1542;
unsigned int var_3 = 25117501U;
unsigned short var_5 = (unsigned short)16721;
unsigned int var_11 = 305415997U;
unsigned short var_12 = (unsigned short)63663;
short var_13 = (short)7164;
unsigned short var_14 = (unsigned short)50249;
int zero = 0;
unsigned short var_15 = (unsigned short)59524;
unsigned int var_16 = 2862902489U;
unsigned int var_17 = 2320131642U;
unsigned short var_18 = (unsigned short)2274;
short var_19 = (short)-11182;
unsigned int var_20 = 667715093U;
unsigned int var_21 = 10264928U;
unsigned int var_22 = 3357762674U;
unsigned short var_23 = (unsigned short)9768;
short var_24 = (short)-4167;
unsigned short var_25 = (unsigned short)22429;
unsigned int var_26 = 3730319315U;
short arr_0 [12] ;
unsigned int arr_5 [15] [15] ;
short arr_8 [15] ;
unsigned short arr_12 [15] ;
short arr_2 [12] [12] ;
unsigned int arr_3 [12] ;
short arr_9 [15] [15] ;
unsigned int arr_16 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-17750;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 1692671992U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)5506;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27489 : (unsigned short)35978;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-2809;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3146683835U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)1492 : (short)-9631;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3703241156U : 1634996981U;
}

void checksum() {
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
