#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned short var_1 = (unsigned short)9436;
unsigned int var_2 = 318101681U;
short var_3 = (short)-11724;
signed char var_4 = (signed char)46;
unsigned int var_5 = 1378009226U;
short var_6 = (short)-4069;
unsigned char var_7 = (unsigned char)21;
unsigned int var_8 = 397179673U;
short var_9 = (short)23217;
unsigned int var_10 = 254787062U;
long long int var_11 = 8866357616814025997LL;
signed char var_12 = (signed char)17;
int zero = 0;
short var_14 = (short)18630;
unsigned int var_15 = 662846279U;
signed char var_16 = (signed char)-115;
int var_17 = 774420375;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 146812489U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 386770141U;
unsigned int var_22 = 3802267797U;
long long int var_23 = -4228094897746327890LL;
signed char var_24 = (signed char)116;
short var_25 = (short)-26879;
long long int var_26 = 6395495979164637723LL;
long long int var_27 = 7554639544286458122LL;
signed char var_28 = (signed char)92;
unsigned int var_29 = 2795539217U;
unsigned int var_30 = 1899610096U;
signed char var_31 = (signed char)(-127 - 1);
unsigned short var_32 = (unsigned short)16509;
unsigned char var_33 = (unsigned char)227;
long long int var_34 = 8571876356570711349LL;
unsigned char arr_4 [14] [14] [14] ;
signed char arr_15 [15] ;
int arr_26 [25] ;
_Bool arr_35 [25] [25] [25] ;
signed char arr_42 [25] [25] [25] [25] ;
int arr_44 [25] [25] [25] ;
unsigned int arr_45 [25] [25] [25] [25] ;
_Bool arr_47 [25] [25] [25] ;
unsigned char arr_51 [25] ;
_Bool arr_13 [15] ;
unsigned int arr_19 [15] [15] ;
signed char arr_20 [15] ;
unsigned char arr_24 [20] ;
long long int arr_25 [20] ;
long long int arr_30 [25] ;
unsigned int arr_39 [25] [25] [25] [25] [25] ;
unsigned char arr_49 [25] [25] ;
unsigned int arr_50 [25] [25] [25] ;
signed char arr_55 [25] [25] [25] ;
unsigned short arr_56 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = 1183754690;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 1089651255;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = 3834883743U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_51 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = 1209958257U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = 4544182304723805907LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = -7546539523066614650LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 1353008206U : 2884921149U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_49 [i_0] [i_1] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = 451989842U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_56 [i_0] = (unsigned short)59898;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_50 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_55 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_56 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
