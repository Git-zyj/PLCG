#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
unsigned short var_1 = (unsigned short)14670;
unsigned char var_2 = (unsigned char)147;
unsigned char var_3 = (unsigned char)228;
unsigned char var_4 = (unsigned char)0;
long long int var_5 = 7400192408911032781LL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)250;
unsigned short var_8 = (unsigned short)16158;
unsigned int var_9 = 3530202452U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_12 = -74206201;
unsigned char var_13 = (unsigned char)6;
unsigned char var_14 = (unsigned char)67;
int zero = 0;
int var_15 = 29202663;
unsigned char var_16 = (unsigned char)72;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)205;
unsigned char var_19 = (unsigned char)50;
unsigned int var_20 = 257128443U;
long long int var_21 = 1837110133607365505LL;
unsigned int var_22 = 3150623759U;
unsigned int var_23 = 2470680993U;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)50;
unsigned char var_26 = (unsigned char)42;
unsigned char var_27 = (unsigned char)100;
short var_28 = (short)-26458;
unsigned char var_29 = (unsigned char)189;
unsigned long long int var_30 = 15148124369033768819ULL;
_Bool var_31 = (_Bool)1;
unsigned char var_32 = (unsigned char)87;
unsigned int var_33 = 1844473547U;
unsigned char var_34 = (unsigned char)136;
unsigned long long int var_35 = 1176886471339273626ULL;
_Bool var_36 = (_Bool)0;
unsigned int var_37 = 4290919263U;
unsigned int var_38 = 2911218854U;
unsigned int var_39 = 2224431756U;
long long int var_40 = 647338376979364974LL;
unsigned char var_41 = (unsigned char)229;
short var_42 = (short)13550;
short var_43 = (short)-9655;
unsigned int var_44 = 1016330467U;
unsigned char var_45 = (unsigned char)109;
unsigned char var_46 = (unsigned char)80;
unsigned int var_47 = 815026796U;
unsigned long long int var_48 = 15150151672219846900ULL;
unsigned int var_49 = 1063040801U;
unsigned short var_50 = (unsigned short)65210;
long long int arr_0 [12] ;
unsigned char arr_1 [12] ;
int arr_2 [12] ;
unsigned char arr_3 [12] ;
long long int arr_6 [12] [12] ;
unsigned int arr_7 [12] [12] [12] [12] ;
unsigned int arr_9 [12] [12] [12] [12] ;
unsigned short arr_10 [12] [12] [12] [12] [12] ;
short arr_13 [12] [12] [12] ;
int arr_15 [12] [12] [12] ;
unsigned short arr_16 [12] ;
unsigned int arr_18 [12] [12] [12] [12] ;
unsigned short arr_21 [12] [12] [12] [12] [12] ;
unsigned short arr_27 [12] [12] [12] ;
signed char arr_28 [12] [12] [12] ;
signed char arr_29 [12] [12] [12] ;
unsigned short arr_42 [12] [12] [12] [12] [12] [12] ;
short arr_53 [25] ;
unsigned int arr_54 [25] ;
unsigned int arr_55 [25] [25] ;
unsigned char arr_60 [25] ;
short arr_12 [12] [12] [12] ;
_Bool arr_51 [12] [12] [12] [12] ;
unsigned int arr_56 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 704517760009666097LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1237362057;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -2933599969082062016LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1109618974U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3547015507U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)62691;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)26142;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1825472433;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned short)19822;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1287886233U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)37473;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned short)21276;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)58749;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_53 [i_0] = (short)28252;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_54 [i_0] = 3439247518U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_55 [i_0] [i_1] = 3273788372U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_60 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)21364 : (short)-23192;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_56 [i_0] = 464783467U;
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
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] );
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
