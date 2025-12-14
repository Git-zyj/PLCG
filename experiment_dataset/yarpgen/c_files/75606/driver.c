#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2269007685U;
short var_2 = (short)-556;
int var_3 = -122389648;
unsigned int var_4 = 2381209589U;
short var_8 = (short)-30325;
unsigned long long int var_9 = 5263614222323268871ULL;
unsigned short var_11 = (unsigned short)37655;
int var_12 = 804247878;
int zero = 0;
short var_13 = (short)-21932;
unsigned short var_14 = (unsigned short)60396;
short var_15 = (short)13825;
signed char var_16 = (signed char)-88;
int var_17 = -814134467;
int var_18 = 1542899785;
int var_19 = 1603830570;
signed char var_20 = (signed char)76;
unsigned int var_21 = 3690835903U;
unsigned long long int var_22 = 13661988417273126489ULL;
unsigned short var_23 = (unsigned short)32388;
int var_24 = -1541325998;
unsigned char var_25 = (unsigned char)190;
unsigned int var_26 = 3641700120U;
long long int var_27 = -4405669714529608681LL;
int var_28 = -1992590581;
int arr_2 [13] ;
unsigned long long int arr_4 [13] [13] ;
int arr_6 [13] [13] ;
short arr_7 [13] [13] [13] [13] ;
unsigned short arr_18 [18] [18] ;
short arr_21 [21] [21] ;
unsigned int arr_22 [21] [21] ;
_Bool arr_26 [21] [21] ;
unsigned char arr_28 [21] [21] [21] [21] ;
long long int arr_37 [21] ;
unsigned long long int arr_39 [21] [21] ;
unsigned short arr_41 [21] ;
int arr_49 [21] [21] [21] [21] [21] ;
unsigned int arr_10 [13] [13] ;
unsigned char arr_11 [13] [13] [13] ;
int arr_14 [10] ;
unsigned char arr_15 [10] ;
unsigned long long int arr_16 [10] ;
unsigned int arr_19 [18] ;
int arr_20 [18] ;
_Bool arr_29 [21] [21] [21] ;
unsigned int arr_36 [21] [21] [21] [21] [21] ;
int arr_46 [21] [21] [21] [21] ;
unsigned char arr_52 [21] [21] ;
unsigned int arr_55 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 733958797 : -4704364;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 7357595235223347346ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -1605299642;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)13956 : (short)26734;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)39108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (short)8230;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_22 [i_0] [i_1] = 2752164258U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = -6296470331442606813LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_39 [i_0] [i_1] = 15250600300948904328ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_41 [i_0] = (unsigned short)55407;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = -79073372;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 2616174000U : 1503150719U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)168 : (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 1644713682;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 3832077221422549872ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 3763246151U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = -494769020;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 2337901905U : 1924850798U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1202310975 : -6030291;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_52 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)159 : (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_55 [i_0] = 4194610524U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_55 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
