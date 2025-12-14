#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
short var_1 = (short)8477;
unsigned int var_2 = 3297715962U;
unsigned int var_3 = 2468815761U;
signed char var_4 = (signed char)-103;
unsigned short var_5 = (unsigned short)15709;
short var_6 = (short)-29000;
long long int var_7 = 5517559980895764393LL;
short var_8 = (short)29173;
unsigned short var_9 = (unsigned short)30629;
short var_10 = (short)-9544;
int zero = 0;
unsigned short var_11 = (unsigned short)50072;
short var_12 = (short)3405;
long long int var_13 = 4106947330622139227LL;
long long int var_14 = -4016831071244474975LL;
signed char var_15 = (signed char)-85;
unsigned short var_16 = (unsigned short)30053;
unsigned int var_17 = 1620804482U;
long long int var_18 = -4384703467888805411LL;
unsigned short var_19 = (unsigned short)3967;
int var_20 = 42087736;
unsigned char var_21 = (unsigned char)222;
long long int var_22 = 792906891232056906LL;
unsigned int var_23 = 602494265U;
short var_24 = (short)18294;
_Bool var_25 = (_Bool)0;
long long int var_26 = 7604308325613833356LL;
unsigned short var_27 = (unsigned short)50566;
unsigned short var_28 = (unsigned short)32062;
unsigned int var_29 = 4172004037U;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)33558;
long long int var_32 = -7262204388180899129LL;
short var_33 = (short)-18169;
unsigned short var_34 = (unsigned short)31403;
unsigned char var_35 = (unsigned char)238;
unsigned long long int var_36 = 11230113397003114154ULL;
unsigned short var_37 = (unsigned short)3197;
int var_38 = 1175887181;
int var_39 = -2006863018;
long long int var_40 = -5590041943343509443LL;
unsigned long long int var_41 = 7716139111211438329ULL;
_Bool var_42 = (_Bool)1;
int var_43 = -1067982756;
signed char arr_0 [21] ;
_Bool arr_1 [21] ;
long long int arr_2 [21] ;
unsigned int arr_9 [11] ;
unsigned long long int arr_10 [11] ;
unsigned char arr_15 [11] [11] [11] [11] ;
unsigned long long int arr_16 [11] [11] [11] [11] ;
unsigned long long int arr_21 [11] [11] ;
int arr_22 [11] ;
unsigned short arr_23 [11] [11] ;
long long int arr_26 [11] [11] [11] [11] [11] ;
unsigned short arr_29 [11] [11] ;
unsigned short arr_33 [11] [11] [11] [11] ;
unsigned short arr_34 [11] ;
unsigned short arr_35 [11] [11] [11] [11] ;
unsigned short arr_37 [11] [11] [11] [11] [11] ;
signed char arr_39 [11] [11] [11] [11] ;
unsigned short arr_40 [11] [11] ;
short arr_46 [11] [11] [11] [11] ;
signed char arr_48 [11] [11] [11] [11] [11] [11] ;
short arr_54 [11] [11] [11] [11] [11] [11] ;
signed char arr_64 [13] ;
unsigned int arr_66 [13] ;
unsigned char arr_71 [19] ;
unsigned long long int arr_73 [19] ;
unsigned int arr_76 [24] [24] ;
unsigned int arr_3 [21] ;
long long int arr_7 [10] ;
long long int arr_19 [11] ;
int arr_27 [11] [11] [11] [11] [11] [11] ;
unsigned short arr_28 [11] ;
unsigned short arr_38 [11] [11] [11] [11] ;
signed char arr_56 [11] ;
unsigned int arr_57 [11] [11] [11] ;
short arr_61 [11] [11] [11] ;
signed char arr_62 [11] ;
unsigned short arr_70 [13] ;
unsigned long long int arr_74 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -5832126085597378443LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 891711810U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 18068777421342346867ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 10749930875246194181ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = 3061455139797767381ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = -186118646;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)6477;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 7037146178449018429LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned short)26659;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (unsigned short)51761;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_34 [i_0] = (unsigned short)53088;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)14397 : (unsigned short)35458;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)55473 : (unsigned short)37583;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)19464;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-2843 : (short)-20711;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-981;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_64 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_66 [i_0] = 447232882U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_71 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_73 [i_0] = 10837655614697684834ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_76 [i_0] [i_1] = 3375106543U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2123821326U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 6777617781530788344LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = 3204757935181938319LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1932370227;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (unsigned short)10614;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (unsigned short)56578;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_56 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = 281588620U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (short)-12768;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_62 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_70 [i_0] = (unsigned short)7095;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_74 [i_0] = 6476671721351673351ULL;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_57 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_61 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_62 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_70 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_74 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
