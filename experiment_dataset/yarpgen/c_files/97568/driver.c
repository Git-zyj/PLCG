#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6483;
unsigned int var_1 = 1257693074U;
long long int var_3 = 5564926929155484558LL;
unsigned char var_4 = (unsigned char)146;
unsigned char var_5 = (unsigned char)39;
long long int var_6 = -3134254141616425821LL;
short var_7 = (short)8162;
unsigned long long int var_9 = 15380037744427445594ULL;
long long int var_10 = 1791669223781650208LL;
int zero = 0;
long long int var_11 = -5347503484793703191LL;
long long int var_12 = -2170066100702087635LL;
unsigned short var_13 = (unsigned short)63905;
long long int var_14 = 4090966544533187724LL;
long long int var_15 = 2994509953151701508LL;
signed char var_16 = (signed char)55;
unsigned long long int var_17 = 11856805856959328941ULL;
long long int var_18 = -295617928306943465LL;
short var_19 = (short)-11516;
unsigned long long int var_20 = 11995309172053512415ULL;
unsigned short var_21 = (unsigned short)45147;
long long int var_22 = 2652720775098409028LL;
unsigned int var_23 = 3149053904U;
unsigned char var_24 = (unsigned char)167;
unsigned int var_25 = 1731489242U;
unsigned int var_26 = 3585715853U;
signed char var_27 = (signed char)-47;
long long int var_28 = -3826719595175846877LL;
unsigned long long int var_29 = 15121805296206855835ULL;
short var_30 = (short)27908;
unsigned char var_31 = (unsigned char)93;
signed char arr_2 [10] ;
unsigned short arr_4 [14] ;
short arr_5 [14] [14] ;
unsigned long long int arr_6 [14] ;
unsigned int arr_8 [11] ;
unsigned char arr_9 [11] [11] ;
short arr_10 [21] [21] ;
signed char arr_11 [21] ;
unsigned int arr_12 [21] ;
unsigned long long int arr_17 [21] ;
unsigned char arr_20 [21] [21] [21] ;
signed char arr_21 [21] [21] [21] [21] [21] [21] ;
unsigned long long int arr_22 [21] [21] [21] ;
unsigned short arr_3 [10] ;
short arr_13 [21] ;
signed char arr_14 [21] ;
unsigned char arr_25 [21] [21] [21] [21] [21] ;
unsigned long long int arr_26 [21] [21] [21] [21] ;
unsigned short arr_37 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)11990;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-3622;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 15255529644092233106ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 444780862U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)178 : (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (short)16270;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 4097011088U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 6111089471237696350ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 8367180105575905384ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)32165;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)-27528;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 3180644936605284884ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_37 [i_0] [i_1] = (unsigned short)4919;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
