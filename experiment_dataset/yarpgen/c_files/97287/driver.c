#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-124;
signed char var_4 = (signed char)-82;
unsigned char var_7 = (unsigned char)199;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 12030036561115529890ULL;
signed char var_12 = (signed char)-55;
unsigned char var_13 = (unsigned char)76;
short var_14 = (short)29773;
short var_15 = (short)15353;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_18 = (short)23822;
short var_19 = (short)-32209;
short var_20 = (short)28441;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 3492962421411477064ULL;
short var_23 = (short)4143;
unsigned char var_24 = (unsigned char)138;
short var_25 = (short)18326;
unsigned char var_26 = (unsigned char)67;
short var_27 = (short)-4042;
short var_28 = (short)10162;
unsigned char var_29 = (unsigned char)159;
unsigned long long int var_30 = 13387284981960074131ULL;
signed char arr_0 [13] ;
short arr_1 [13] [13] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_8 [25] [25] [25] ;
_Bool arr_11 [25] [25] [25] [25] [25] [25] ;
short arr_12 [25] [25] ;
unsigned char arr_15 [14] ;
unsigned long long int arr_21 [13] [13] ;
unsigned long long int arr_22 [13] ;
signed char arr_30 [21] ;
signed char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-28154;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 2787665542084470982ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 8116178104747641799ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (short)22375;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = 2440350325421482245ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = 16731622725565359524ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_30 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)20 : (signed char)-101;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
