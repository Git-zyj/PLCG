#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9117868937662031065LL;
unsigned short var_1 = (unsigned short)19188;
long long int var_2 = -4725684890895451702LL;
unsigned short var_4 = (unsigned short)35629;
unsigned short var_6 = (unsigned short)48426;
unsigned short var_7 = (unsigned short)19219;
long long int var_8 = -5421886207675254033LL;
short var_10 = (short)28486;
unsigned char var_12 = (unsigned char)14;
long long int var_13 = -5296470845512228518LL;
unsigned char var_14 = (unsigned char)142;
long long int var_15 = -8265247673767341566LL;
int var_16 = 2095422666;
unsigned int var_17 = 1448295737U;
int var_18 = -1868939079;
short var_19 = (short)-892;
int zero = 0;
long long int var_20 = -8271827036636014717LL;
unsigned int var_21 = 2189960072U;
unsigned int var_22 = 1509545267U;
short var_23 = (short)-20714;
signed char var_24 = (signed char)52;
unsigned short var_25 = (unsigned short)46314;
unsigned short var_26 = (unsigned short)45356;
short var_27 = (short)-29109;
unsigned int var_28 = 3377443108U;
unsigned long long int var_29 = 366010746832038225ULL;
long long int var_30 = -1660938353312809427LL;
unsigned char var_31 = (unsigned char)54;
unsigned long long int var_32 = 8844145556923838741ULL;
signed char var_33 = (signed char)110;
short var_34 = (short)-22108;
signed char var_35 = (signed char)-2;
unsigned int var_36 = 2639578307U;
signed char var_37 = (signed char)-21;
unsigned short var_38 = (unsigned short)20373;
short var_39 = (short)27794;
unsigned short var_40 = (unsigned short)62581;
unsigned int var_41 = 1137346910U;
signed char arr_15 [14] ;
unsigned int arr_19 [14] ;
unsigned short arr_26 [14] ;
int arr_38 [20] [20] [20] ;
long long int arr_42 [20] [20] [20] [20] [20] [20] ;
signed char arr_45 [20] [20] [20] [20] [20] [20] ;
long long int arr_48 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 1953824702U : 2670990980U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59660 : (unsigned short)8262;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 562911962 : -2048586018;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 3088251735095658436LL : -6257337707082159444LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (signed char)-90 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2310166801019567613LL : -3106232781725597362LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
