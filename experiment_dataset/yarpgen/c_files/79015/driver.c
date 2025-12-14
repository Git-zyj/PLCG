#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1620741594;
unsigned char var_1 = (unsigned char)48;
signed char var_2 = (signed char)14;
unsigned long long int var_3 = 4309081824800543442ULL;
unsigned char var_9 = (unsigned char)23;
unsigned long long int var_15 = 3959494179658458245ULL;
short var_18 = (short)32740;
int zero = 0;
int var_20 = -620847751;
signed char var_21 = (signed char)-52;
unsigned short var_22 = (unsigned short)16715;
unsigned int var_23 = 1005274984U;
unsigned int var_24 = 24912218U;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
int var_27 = -1512803292;
short var_28 = (short)659;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 4531747940289545206ULL;
int var_31 = -198114744;
signed char var_32 = (signed char)-100;
_Bool var_33 = (_Bool)0;
long long int var_34 = 7305183933067371177LL;
long long int var_35 = -3061651526851768779LL;
int arr_4 [15] [15] [15] ;
long long int arr_5 [15] [15] [15] ;
long long int arr_8 [15] [15] [15] ;
_Bool arr_9 [15] [15] [15] [15] ;
short arr_13 [15] [15] [15] [15] [15] [15] [15] ;
short arr_15 [15] [15] ;
unsigned long long int arr_24 [24] [24] ;
_Bool arr_25 [24] ;
signed char arr_29 [20] ;
unsigned long long int arr_30 [20] ;
unsigned char arr_33 [20] ;
unsigned char arr_34 [20] [20] ;
unsigned short arr_38 [20] [20] [20] ;
int arr_39 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_12 [15] ;
unsigned int arr_16 [15] [15] [15] [15] [15] ;
short arr_17 [15] [15] [15] [15] [15] [15] ;
_Bool arr_18 [15] [15] ;
signed char arr_22 [15] ;
int arr_23 [15] [15] ;
long long int arr_26 [24] ;
unsigned char arr_27 [24] [24] ;
unsigned char arr_41 [20] [20] ;
unsigned int arr_42 [20] ;
unsigned int arr_45 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -775825428;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -523663623783468025LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -4870914588099720532LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (short)-10119 : (short)-19273;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (short)16353;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = 10836359250212239413ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = 17671284740993407487ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)37417;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1912440693;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 11720191250562281146ULL : 2878453312513624283ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 2756867392U : 1454238297U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)-19971 : (short)19582;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)-60 : (signed char)-100;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? -1387924267 : -1167985638;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = -3725364340587566699LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_41 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_42 [i_0] = 3669500017U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? 3076165214U : 4180446190U;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
