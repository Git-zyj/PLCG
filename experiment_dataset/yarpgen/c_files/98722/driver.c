#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 3403782753628265432ULL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -4205292712218800952LL;
unsigned char var_5 = (unsigned char)116;
short var_6 = (short)-28137;
unsigned long long int var_7 = 522668294719620033ULL;
unsigned char var_8 = (unsigned char)105;
short var_9 = (short)-9702;
signed char var_10 = (signed char)-44;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)43;
short var_15 = (short)11091;
unsigned long long int var_16 = 16815023278412926732ULL;
int var_17 = -329731264;
int zero = 0;
long long int var_18 = 4361610518535091525LL;
unsigned long long int var_19 = 5339639811054887917ULL;
int var_20 = 364191528;
unsigned long long int var_21 = 10694480560080886947ULL;
signed char var_22 = (signed char)26;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)54;
unsigned short var_25 = (unsigned short)53360;
long long int var_26 = -2054312708333763462LL;
unsigned int var_27 = 2327919634U;
signed char var_28 = (signed char)-125;
unsigned long long int var_29 = 6262020805214406973ULL;
int var_30 = -664200312;
unsigned long long int var_31 = 769150125069134446ULL;
short var_32 = (short)5602;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)58387;
unsigned long long int var_35 = 5326045414142660354ULL;
short var_36 = (short)-7115;
unsigned long long int var_37 = 1208614876698573133ULL;
unsigned char var_38 = (unsigned char)120;
unsigned int var_39 = 4077508524U;
unsigned int var_40 = 230852880U;
int var_41 = -1674660974;
unsigned int var_42 = 4074048151U;
int var_43 = -1623524054;
unsigned long long int var_44 = 14506267458276199997ULL;
_Bool var_45 = (_Bool)0;
_Bool var_46 = (_Bool)0;
int var_47 = -1626175430;
unsigned short var_48 = (unsigned short)35045;
long long int arr_2 [23] ;
long long int arr_8 [23] [23] ;
short arr_15 [23] [23] ;
_Bool arr_34 [23] [23] [23] ;
_Bool arr_44 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -646647283758093257LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 4198262574102422293LL : -6989231954743381562LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)5771 : (short)-6700;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
