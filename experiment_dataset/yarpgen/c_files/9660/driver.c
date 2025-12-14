#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16134523036227907686ULL;
long long int var_2 = -2911389804192297266LL;
unsigned int var_3 = 2248925679U;
short var_7 = (short)5092;
long long int var_8 = 8252878935146572707LL;
unsigned char var_9 = (unsigned char)159;
_Bool var_11 = (_Bool)0;
short var_12 = (short)10337;
long long int var_13 = -331280736497554098LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1417602777U;
int var_16 = -315535202;
long long int var_18 = -5183461062007410038LL;
int zero = 0;
short var_19 = (short)19521;
unsigned char var_20 = (unsigned char)57;
short var_21 = (short)19497;
unsigned int var_22 = 890529822U;
int var_23 = -2051170261;
unsigned int var_24 = 774599334U;
unsigned short var_25 = (unsigned short)39932;
short var_26 = (short)16286;
int var_27 = -680275779;
unsigned long long int var_28 = 9379451627110335945ULL;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 11534047650751149075ULL;
unsigned long long int var_31 = 3288411268815735277ULL;
unsigned short var_32 = (unsigned short)28068;
signed char var_33 = (signed char)-110;
unsigned int var_34 = 4101563269U;
unsigned char var_35 = (unsigned char)231;
unsigned short var_36 = (unsigned short)18566;
int var_37 = 1003029642;
unsigned int var_38 = 2941148793U;
unsigned int var_39 = 4117340048U;
int var_40 = 1373193201;
unsigned int var_41 = 271891916U;
int var_42 = 865122543;
unsigned long long int var_43 = 8305600057060462404ULL;
short var_44 = (short)-19771;
unsigned int var_45 = 3318805826U;
unsigned long long int var_46 = 743519251193998254ULL;
unsigned int var_47 = 938575185U;
unsigned int var_48 = 2308767513U;
unsigned short var_49 = (unsigned short)49704;
short var_50 = (short)23383;
signed char var_51 = (signed char)-68;
unsigned int var_52 = 3712071215U;
unsigned int var_53 = 2561355144U;
unsigned long long int arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
int arr_2 [25] ;
long long int arr_3 [25] [25] [25] ;
unsigned int arr_6 [25] [25] [25] [25] ;
short arr_7 [25] [25] [25] [25] ;
short arr_8 [25] [25] [25] ;
long long int arr_9 [25] [25] [25] [25] [25] ;
_Bool arr_12 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_14 [23] ;
unsigned int arr_15 [23] ;
unsigned long long int arr_18 [23] [23] [23] [23] ;
int arr_19 [23] [23] [23] ;
signed char arr_20 [23] [23] [23] [23] ;
long long int arr_22 [23] [23] [23] [23] [23] [23] ;
int arr_23 [23] [23] [23] [23] ;
unsigned int arr_24 [23] [23] [23] [23] [23] ;
unsigned char arr_27 [23] [23] ;
unsigned short arr_33 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 3483136504102997063ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4239515333U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 801577934;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -8585566605069644046LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2790662645U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-23254;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)23354 : (short)20682;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 5373428386232834553LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 3384082318U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 2003496247U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 10094316437629126790ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 870880068;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -6339382344995988535LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 348577837;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 298014246U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29441 : (unsigned short)10979;
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
    hash(&seed, var_53);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
