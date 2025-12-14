#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-89;
int var_3 = -145676807;
_Bool var_4 = (_Bool)0;
long long int var_5 = 7326972084891604660LL;
signed char var_7 = (signed char)-59;
signed char var_8 = (signed char)67;
unsigned int var_9 = 1232724638U;
long long int var_10 = -4003735186961023772LL;
signed char var_11 = (signed char)56;
int var_13 = -749811241;
unsigned int var_14 = 1204591439U;
int var_15 = -700959730;
unsigned long long int var_16 = 16929662225144638617ULL;
long long int var_17 = 1640370849114334819LL;
short var_18 = (short)-23438;
int zero = 0;
int var_19 = 1865198596;
long long int var_20 = 3546969564817601493LL;
unsigned int var_21 = 2429452648U;
long long int var_22 = -1719396426580655292LL;
long long int var_23 = -2679905840225269128LL;
long long int var_24 = 5068984804076313094LL;
unsigned short var_25 = (unsigned short)60701;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 1380537994U;
unsigned char var_28 = (unsigned char)43;
long long int var_29 = 598772254536071950LL;
unsigned short var_30 = (unsigned short)13811;
int var_31 = 1173629718;
short var_32 = (short)-2409;
unsigned char var_33 = (unsigned char)126;
unsigned long long int var_34 = 8708215660248070348ULL;
unsigned int var_35 = 2435926933U;
unsigned short var_36 = (unsigned short)42839;
unsigned long long int var_37 = 12968669210875626991ULL;
long long int var_38 = 7245989843736358419LL;
long long int var_39 = 5019223190671335216LL;
unsigned short var_40 = (unsigned short)52961;
short var_41 = (short)-1618;
long long int var_42 = 2871899988611691159LL;
_Bool var_43 = (_Bool)0;
unsigned char var_44 = (unsigned char)87;
long long int var_45 = -8223301716046387937LL;
unsigned char var_46 = (unsigned char)73;
unsigned int var_47 = 3474300832U;
signed char var_48 = (signed char)-33;
unsigned char var_49 = (unsigned char)88;
unsigned short var_50 = (unsigned short)19062;
short var_51 = (short)13302;
signed char var_52 = (signed char)94;
long long int arr_5 [12] [12] [12] ;
_Bool arr_8 [12] ;
int arr_12 [12] [12] [12] [12] [12] ;
long long int arr_13 [12] [12] [12] [12] ;
long long int arr_16 [13] [13] ;
unsigned int arr_17 [13] ;
unsigned long long int arr_21 [13] ;
unsigned char arr_23 [24] [24] ;
unsigned short arr_24 [24] ;
unsigned short arr_25 [24] ;
unsigned short arr_26 [24] [24] [24] ;
unsigned int arr_27 [24] [24] [24] ;
short arr_29 [24] [24] [24] [24] ;
unsigned char arr_30 [24] [24] [24] ;
_Bool arr_31 [24] ;
signed char arr_32 [24] [24] [24] [24] ;
int arr_40 [24] [24] [24] ;
signed char arr_42 [24] [24] [24] [24] [24] ;
unsigned long long int arr_10 [12] [12] [12] [12] [12] [12] ;
signed char arr_14 [12] [12] [12] [12] ;
short arr_15 [12] ;
unsigned long long int arr_18 [13] ;
int arr_22 [13] ;
unsigned long long int arr_46 [24] [24] ;
short arr_49 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1413006676668435745LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -1806949322;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 614031339648776614LL : 812112930847002500LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = 9110166899083608098LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 3628553404U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = 1720879094712609170ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52037 : (unsigned short)16833;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (unsigned short)44347;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)17326;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 3683314182U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)21716 : (short)-335;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)44 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = -273865521;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 16437922479747698624ULL : 12684416097262388493ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-88 : (signed char)95;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)30615 : (short)-27975;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 2603840573805411919ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = -593735391;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_46 [i_0] [i_1] = 13583992847215843008ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? (short)20611 : (short)13759;
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_49 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
