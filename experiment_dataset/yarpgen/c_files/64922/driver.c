#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
signed char var_1 = (signed char)-45;
unsigned int var_2 = 2448609666U;
unsigned int var_3 = 3005523443U;
long long int var_4 = 2652685183292483298LL;
_Bool var_5 = (_Bool)1;
int var_8 = -1332428308;
unsigned char var_9 = (unsigned char)43;
unsigned int var_10 = 2681479349U;
long long int var_11 = -7310782710483582108LL;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)26529;
short var_15 = (short)7494;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 14316969923446156870ULL;
unsigned char var_18 = (unsigned char)234;
unsigned int var_19 = 2545227780U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-88;
unsigned int var_22 = 3567057094U;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)65014;
int var_25 = -480817791;
int var_26 = 1921434234;
signed char var_27 = (signed char)6;
unsigned long long int var_28 = 14314069131456992630ULL;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)60;
int var_31 = 1501436929;
_Bool var_32 = (_Bool)1;
int var_33 = -2126733549;
unsigned long long int var_34 = 17328272853155409833ULL;
short var_35 = (short)-16238;
int var_36 = 101158075;
short var_37 = (short)7361;
signed char var_38 = (signed char)-10;
unsigned char var_39 = (unsigned char)118;
long long int var_40 = -7816037313010058586LL;
long long int var_41 = 5461252075607184211LL;
unsigned short var_42 = (unsigned short)57289;
unsigned char var_43 = (unsigned char)77;
unsigned int var_44 = 2859333415U;
long long int var_45 = -7596083920977814116LL;
unsigned char var_46 = (unsigned char)96;
unsigned short var_47 = (unsigned short)60922;
unsigned int var_48 = 1725202213U;
unsigned int var_49 = 1939665095U;
unsigned long long int var_50 = 5883017318271321876ULL;
unsigned char var_51 = (unsigned char)92;
_Bool var_52 = (_Bool)1;
short var_53 = (short)15774;
unsigned int var_54 = 1290524557U;
signed char var_55 = (signed char)-109;
int var_56 = 807681388;
unsigned long long int arr_0 [24] ;
_Bool arr_2 [24] ;
long long int arr_3 [24] [24] [24] ;
signed char arr_4 [24] ;
int arr_6 [24] [24] [24] [24] ;
unsigned int arr_7 [24] [24] [24] ;
int arr_8 [24] [24] [24] ;
int arr_13 [16] [16] ;
unsigned int arr_15 [21] [21] ;
_Bool arr_17 [21] ;
signed char arr_20 [21] [21] [21] [21] ;
int arr_21 [21] [21] [21] ;
unsigned int arr_23 [21] [21] [21] [21] [21] [21] ;
_Bool arr_25 [21] [21] [21] [21] [21] [21] ;
signed char arr_26 [21] [21] [21] [21] [21] ;
unsigned int arr_28 [21] [21] ;
long long int arr_32 [21] [21] [21] [21] ;
unsigned long long int arr_33 [21] ;
signed char arr_36 [21] [21] [21] [21] [21] ;
short arr_37 [21] [21] ;
unsigned int arr_38 [21] [21] [21] [21] [21] [21] [21] ;
signed char arr_39 [21] [21] [21] [21] [21] ;
_Bool arr_41 [21] [21] [21] [21] [21] [21] ;
signed char arr_47 [21] [21] [21] [21] [21] ;
unsigned int arr_51 [21] ;
_Bool arr_9 [24] [24] [24] ;
signed char arr_34 [21] [21] [21] [21] [21] [21] ;
int arr_35 [21] ;
signed char arr_42 [21] [21] [21] [21] [21] ;
unsigned int arr_48 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_56 [21] [21] ;
signed char arr_59 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 14376925888016257825ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2224268415257980081LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1280584293;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3942509629U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1860045291;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = -1821726815;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = 3262755825U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 1672979679;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1749512319U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? 685602999U : 1707036685U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 5170070839014376069LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_33 [i_0] = 2863946997740978883ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_37 [i_0] [i_1] = (short)3386;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 15802570U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-62 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_51 [i_0] = 2809447880U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (signed char)58 : (signed char)-100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 1068871680 : -1014513868;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-93 : (signed char)-123;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1021225980U : 1238035931U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_56 [i_0] [i_1] = 3051212552U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_59 [i_0] = (signed char)67;
}

void checksum() {
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
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_59 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
