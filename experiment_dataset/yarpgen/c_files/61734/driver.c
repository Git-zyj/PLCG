#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35684;
unsigned char var_1 = (unsigned char)13;
long long int var_2 = -8326733224984141976LL;
long long int var_3 = -2380476145083147277LL;
int var_4 = 504706229;
int var_5 = -357922494;
int var_6 = -691375405;
_Bool var_7 = (_Bool)0;
int var_8 = 1685398142;
unsigned int var_9 = 1108668560U;
unsigned long long int var_10 = 461685010908565738ULL;
unsigned int var_11 = 2338991552U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)37234;
short var_15 = (short)-7504;
unsigned char var_16 = (unsigned char)21;
int zero = 0;
short arr_0 [13] ;
short arr_1 [13] ;
short arr_4 [13] ;
unsigned char arr_5 [13] ;
unsigned int arr_9 [16] ;
unsigned long long int arr_10 [16] ;
short arr_11 [16] ;
int arr_14 [20] [20] ;
_Bool arr_15 [20] ;
unsigned long long int arr_17 [20] ;
unsigned short arr_18 [20] ;
short arr_19 [20] [20] [20] ;
short arr_20 [20] [20] [20] ;
int arr_21 [20] ;
unsigned int arr_22 [20] [20] [20] [20] ;
int arr_23 [20] [20] [20] ;
int arr_30 [15] [15] ;
signed char arr_35 [15] [15] [15] ;
long long int arr_36 [15] ;
_Bool arr_37 [15] [15] [15] [15] ;
long long int arr_38 [15] [15] [15] ;
int arr_39 [15] [15] ;
long long int arr_48 [18] ;
int arr_2 [13] [13] ;
short arr_3 [13] ;
int arr_6 [13] [13] ;
long long int arr_7 [13] ;
int arr_8 [13] ;
signed char arr_12 [16] ;
int arr_13 [16] [16] ;
int arr_16 [20] ;
short arr_24 [20] [20] [20] [20] ;
int arr_25 [20] [20] [20] [20] ;
unsigned char arr_26 [20] [20] [20] [20] ;
long long int arr_27 [20] [20] [20] ;
int arr_28 [20] ;
unsigned int arr_41 [15] [15] [15] ;
signed char arr_42 [15] [15] [15] [15] ;
unsigned short arr_43 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_44 [15] [15] [15] [15] [15] ;
unsigned long long int arr_45 [15] [15] [15] ;
signed char arr_46 [15] ;
_Bool arr_49 [18] ;
_Bool arr_50 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)14185;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)16776;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)10141;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1274948374U : 2950548212U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 17269762780440828993ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)-21458;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = -41142602;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 4226867011892431805ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12974 : (unsigned short)56667;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)11912 : (short)23860;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-12101 : (short)-23589;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = 893107125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 397241353U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1128797818 : -584683610;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_30 [i_0] [i_1] = -976382152;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-107 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_36 [i_0] = -291292069180310195LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 4578220549185632731LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_39 [i_0] [i_1] = 598438842;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_48 [i_0] = -7378840431149410879LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -353147032;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-18594;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -1595431628;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 300888685398456483LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 1754539882;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-52 : (signed char)87;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? -1386089428 : 1837216372;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1438412994 : -1073405585;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)25599 : (short)12795;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1307959100 : -1102548182;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)74 : (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -9101606531863847125LL : -2936487477746458366LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 687808387 : -1675201616;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3960358440U : 2978076147U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)17 : (signed char)42;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)52161 : (unsigned short)21709;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)12933 : (unsigned short)1510;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1579194718687035269ULL : 18348980696099711640ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_46 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_49 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_50 [i_0] = (_Bool)0;
}

void checksum() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_50 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
