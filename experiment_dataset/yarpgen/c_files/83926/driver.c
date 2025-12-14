#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6049677062358839594LL;
signed char var_2 = (signed char)7;
unsigned short var_3 = (unsigned short)5852;
unsigned long long int var_5 = 13571853768357322995ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)126;
unsigned long long int var_8 = 1877092817719726434ULL;
long long int var_9 = -950531995408623328LL;
int var_10 = 318444519;
unsigned char var_12 = (unsigned char)5;
signed char var_14 = (signed char)69;
unsigned int var_17 = 3751162165U;
int zero = 0;
int var_18 = -2090916974;
unsigned int var_19 = 1303708755U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 80920773U;
int var_22 = -1397915527;
unsigned char var_23 = (unsigned char)65;
short var_24 = (short)29219;
signed char var_25 = (signed char)56;
_Bool var_26 = (_Bool)0;
int var_27 = -1221121909;
unsigned short var_28 = (unsigned short)24424;
unsigned int var_29 = 3611335980U;
long long int var_30 = 1278068926114067206LL;
unsigned long long int var_31 = 4823651188606281509ULL;
unsigned int var_32 = 3476967531U;
long long int var_33 = -5361764773010568517LL;
unsigned int var_34 = 3878086199U;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)21;
unsigned long long int var_37 = 1418790500616811111ULL;
long long int var_38 = 8289430914525138714LL;
int var_39 = -57079509;
long long int arr_2 [11] [11] ;
unsigned int arr_4 [11] [11] ;
unsigned int arr_5 [11] [11] [11] ;
unsigned char arr_8 [11] [11] [11] [11] ;
long long int arr_12 [15] ;
unsigned short arr_13 [15] ;
_Bool arr_15 [15] ;
unsigned long long int arr_17 [15] [15] [15] ;
unsigned char arr_18 [15] [15] [15] [15] ;
int arr_26 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 5249845863734790492LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 4144689848U : 2834744358U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1807939036U : 2934123905U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)224 : (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 8053421817782672704LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (unsigned short)22974;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 12111069263904162280ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_26 [i_0] [i_1] = -1359477626;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
