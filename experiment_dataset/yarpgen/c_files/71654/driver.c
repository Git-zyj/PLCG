#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3079216159U;
unsigned short var_1 = (unsigned short)53121;
int var_3 = 223007691;
unsigned int var_4 = 1126502292U;
unsigned char var_6 = (unsigned char)134;
signed char var_7 = (signed char)79;
unsigned int var_8 = 1534178673U;
short var_9 = (short)27793;
short var_11 = (short)-22586;
int zero = 0;
unsigned short var_12 = (unsigned short)5681;
int var_13 = 845039175;
short var_14 = (short)-2311;
unsigned long long int var_15 = 12419895424477890559ULL;
unsigned int var_16 = 2741827303U;
long long int var_17 = -817204687127756786LL;
unsigned long long int var_18 = 3870448512226428482ULL;
int var_19 = -1569406897;
unsigned char var_20 = (unsigned char)213;
signed char var_21 = (signed char)(-127 - 1);
unsigned long long int var_22 = 7647101821403188720ULL;
long long int var_23 = -1628086821434769398LL;
unsigned int var_24 = 3426878141U;
unsigned int var_25 = 1447963085U;
int var_26 = -1754514995;
unsigned int var_27 = 4175304386U;
unsigned long long int var_28 = 15165865069619279923ULL;
int var_29 = -75867044;
signed char var_30 = (signed char)14;
signed char var_31 = (signed char)-125;
short var_32 = (short)-20455;
unsigned char var_33 = (unsigned char)163;
long long int var_34 = -3549277028843404835LL;
short var_35 = (short)31061;
int var_36 = -754517098;
short var_37 = (short)25807;
unsigned long long int var_38 = 9032046320925191854ULL;
unsigned int var_39 = 212473176U;
unsigned int var_40 = 2093620139U;
signed char var_41 = (signed char)-18;
int var_42 = 769666310;
signed char arr_0 [21] ;
int arr_1 [21] ;
unsigned long long int arr_2 [21] ;
short arr_3 [21] ;
int arr_5 [12] [12] ;
unsigned short arr_11 [12] [12] [12] ;
unsigned char arr_12 [12] [12] [12] ;
signed char arr_27 [20] ;
unsigned short arr_28 [20] ;
unsigned short arr_29 [20] [20] ;
unsigned short arr_30 [20] ;
signed char arr_33 [20] ;
unsigned int arr_34 [20] [20] [20] [20] ;
short arr_35 [20] [20] [20] ;
long long int arr_38 [20] [20] [20] ;
long long int arr_39 [20] [20] [20] ;
unsigned char arr_43 [20] [20] [20] ;
unsigned int arr_44 [20] ;
int arr_48 [19] ;
long long int arr_50 [19] ;
unsigned int arr_4 [21] ;
unsigned int arr_9 [12] ;
signed char arr_14 [12] [12] ;
unsigned long long int arr_17 [12] [12] [12] ;
short arr_21 [13] ;
_Bool arr_36 [20] ;
unsigned char arr_40 [20] [20] ;
unsigned long long int arr_41 [20] [20] ;
int arr_46 [20] ;
signed char arr_47 [20] [20] [20] ;
short arr_52 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -1766597164;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 7357728237433846335ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-5903;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 166539775;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)31001;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (signed char)63 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61896 : (unsigned short)6267;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56339 : (unsigned short)41066;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = (unsigned short)5380;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 967078894U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-24669 : (short)12893;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = -1207359324218389783LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6010635925903182554LL : -705522104907995156LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)2 : (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? 2184765797U : 3073451937U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_48 [i_0] = 109165336;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_50 [i_0] = -7941653309811927021LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 3813229014U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 3189228339U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 15464059210805850668ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (short)15545;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)203 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? 17114922155203273162ULL : 13409382342764670876ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? 755655234 : -422445582;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)82 : (signed char)-62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_52 [i_0] = (short)-13441;
}

void checksum() {
    hash(&seed, var_12);
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
