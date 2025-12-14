#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 751442347;
signed char var_1 = (signed char)104;
int var_2 = -1647572281;
signed char var_3 = (signed char)1;
int var_4 = 1605077541;
unsigned int var_5 = 1998225823U;
signed char var_6 = (signed char)-96;
signed char var_9 = (signed char)59;
signed char var_10 = (signed char)2;
int var_11 = -2127558661;
unsigned int var_13 = 1473226072U;
signed char var_15 = (signed char)7;
short var_16 = (short)-19160;
unsigned long long int var_17 = 4348459068913029740ULL;
signed char var_18 = (signed char)118;
signed char var_19 = (signed char)-23;
int zero = 0;
short var_20 = (short)-11814;
signed char var_21 = (signed char)-79;
int var_22 = -178918686;
short var_23 = (short)10371;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)17969;
int var_26 = 356750128;
signed char var_27 = (signed char)-98;
signed char var_28 = (signed char)-44;
int var_29 = 1920030966;
unsigned int var_30 = 3655672538U;
unsigned int var_31 = 2129805173U;
short var_32 = (short)-12581;
unsigned int var_33 = 3848061091U;
_Bool var_34 = (_Bool)0;
unsigned short var_35 = (unsigned short)50699;
short var_36 = (short)29049;
unsigned short var_37 = (unsigned short)3985;
short var_38 = (short)10180;
unsigned int var_39 = 3741619435U;
signed char var_40 = (signed char)73;
int var_41 = -1517199203;
unsigned short var_42 = (unsigned short)17908;
signed char arr_0 [10] [10] ;
int arr_1 [10] ;
signed char arr_2 [10] [10] ;
unsigned short arr_3 [10] [10] [10] ;
unsigned short arr_6 [10] [10] ;
short arr_7 [10] [10] [10] [10] ;
int arr_10 [10] [10] ;
unsigned short arr_14 [10] [10] ;
unsigned int arr_15 [10] ;
_Bool arr_19 [10] [10] [10] ;
_Bool arr_29 [10] [10] [10] ;
unsigned short arr_30 [10] ;
int arr_33 [17] [17] ;
signed char arr_37 [16] ;
signed char arr_38 [16] ;
unsigned short arr_39 [16] ;
_Bool arr_40 [16] [16] ;
signed char arr_42 [16] ;
short arr_44 [16] ;
_Bool arr_48 [16] [16] [16] ;
unsigned long long int arr_50 [16] ;
signed char arr_5 [10] [10] ;
_Bool arr_11 [10] [10] ;
_Bool arr_12 [10] [10] ;
unsigned int arr_13 [10] [10] ;
unsigned short arr_16 [10] [10] ;
unsigned int arr_26 [10] [10] [10] [10] [10] ;
short arr_27 [10] [10] [10] [10] [10] ;
unsigned short arr_31 [10] [10] [10] ;
signed char arr_32 [10] [10] ;
unsigned long long int arr_35 [17] ;
signed char arr_36 [17] ;
unsigned short arr_41 [16] ;
unsigned long long int arr_45 [16] [16] [16] ;
unsigned short arr_49 [16] [16] ;
_Bool arr_52 [16] ;
signed char arr_53 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1653077638;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)57697;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)40603;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-17843;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -1882795516 : -833732269;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)49633;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = 696255950U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = (unsigned short)32878;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_33 [i_0] [i_1] = -228528585;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_37 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_38 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_39 [i_0] = (unsigned short)24922;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_40 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_42 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_44 [i_0] = (short)-7376;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_50 [i_0] = 441854575338047283ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 256992890U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)29878;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 4291402297U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-24734;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)61255 : (unsigned short)19518;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_32 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_35 [i_0] = 336464258554169752ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_36 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_41 [i_0] = (unsigned short)35890;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = 4829443746875592575ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_49 [i_0] [i_1] = (unsigned short)20800;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_52 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_53 [i_0] = (signed char)-6;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_53 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
