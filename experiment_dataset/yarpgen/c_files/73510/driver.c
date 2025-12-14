#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20627;
long long int var_1 = 5454956246049517101LL;
unsigned long long int var_3 = 4771914870355866856ULL;
unsigned long long int var_4 = 13563809259988257214ULL;
signed char var_5 = (signed char)-30;
unsigned short var_6 = (unsigned short)16312;
unsigned int var_7 = 1862243927U;
unsigned long long int var_9 = 6314082091587786959ULL;
signed char var_10 = (signed char)-55;
short var_11 = (short)16730;
int zero = 0;
int var_15 = 685166318;
long long int var_16 = 907564339823096461LL;
short var_17 = (short)-19396;
unsigned long long int var_18 = 6026524281614553841ULL;
unsigned short var_19 = (unsigned short)3051;
unsigned short var_20 = (unsigned short)26621;
unsigned short var_21 = (unsigned short)37259;
signed char var_22 = (signed char)100;
short var_23 = (short)10468;
unsigned long long int var_24 = 142473464206402527ULL;
long long int var_25 = 248037703141792586LL;
short var_26 = (short)-24444;
unsigned short var_27 = (unsigned short)17851;
unsigned short var_28 = (unsigned short)14261;
signed char var_29 = (signed char)14;
short var_30 = (short)12374;
unsigned int var_31 = 3100947320U;
unsigned short var_32 = (unsigned short)51829;
unsigned long long int var_33 = 10457424643936861059ULL;
int var_34 = -1191816327;
unsigned short var_35 = (unsigned short)35061;
unsigned long long int var_36 = 14464150384934009000ULL;
short var_37 = (short)-23509;
signed char var_38 = (signed char)33;
unsigned short var_39 = (unsigned short)13138;
signed char var_40 = (signed char)101;
int var_41 = 411600652;
signed char var_42 = (signed char)-17;
signed char var_43 = (signed char)-39;
short var_44 = (short)-5441;
unsigned short arr_1 [22] [22] ;
int arr_2 [22] [22] ;
long long int arr_3 [22] [22] ;
unsigned int arr_4 [22] [22] ;
unsigned short arr_5 [22] ;
long long int arr_7 [22] ;
long long int arr_9 [22] ;
int arr_11 [22] ;
long long int arr_18 [22] [22] ;
long long int arr_21 [22] [22] [22] ;
long long int arr_15 [22] [22] [22] [22] ;
long long int arr_24 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)35620;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -1844790807;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 3577876733294449034LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 2666469188U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)13834;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 2742531357230341199LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 2311696208607709775LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = -174208924;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = 2859619893618136741LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -7055344837228554076LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 5366610625722597295LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? -65840042228306447LL : -1647913028794836516LL;
}

void checksum() {
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
    hash(&seed, var_44);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
