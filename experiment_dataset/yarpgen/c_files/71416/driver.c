#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 337043191;
signed char var_1 = (signed char)-97;
_Bool var_2 = (_Bool)0;
long long int var_4 = 370101876608201373LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_7 = 1100737833851129356LL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)152;
short var_10 = (short)-30552;
unsigned char var_11 = (unsigned char)77;
int zero = 0;
long long int var_12 = -4343920147339602306LL;
long long int var_13 = -7838074254685619789LL;
unsigned long long int var_14 = 18372197395960302370ULL;
unsigned long long int var_15 = 16817911361543686661ULL;
unsigned long long int var_16 = 5959426262658099307ULL;
unsigned short var_17 = (unsigned short)9080;
unsigned long long int var_18 = 2232740441950642957ULL;
short var_19 = (short)-12014;
unsigned long long int var_20 = 10473604572821897946ULL;
unsigned long long int var_21 = 9395251450338873669ULL;
long long int var_22 = -5609451986049384000LL;
unsigned long long int var_23 = 14560069089893428311ULL;
unsigned char var_24 = (unsigned char)127;
short var_25 = (short)-13281;
long long int var_26 = 8008426762118205454LL;
unsigned char var_27 = (unsigned char)69;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)54;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 148162105339178892ULL;
signed char var_32 = (signed char)55;
int var_33 = -1359667210;
int var_34 = 840498509;
unsigned char var_35 = (unsigned char)59;
unsigned short var_36 = (unsigned short)19639;
unsigned char var_37 = (unsigned char)124;
unsigned long long int var_38 = 2712163510582166003ULL;
short var_39 = (short)-29130;
int var_40 = 379813206;
signed char var_41 = (signed char)112;
int var_42 = 2109355374;
short var_43 = (short)-42;
long long int arr_0 [17] ;
unsigned char arr_1 [17] ;
unsigned char arr_2 [17] ;
int arr_3 [17] [17] [17] ;
unsigned char arr_4 [17] [17] ;
long long int arr_11 [17] [17] [17] [17] ;
short arr_12 [17] [17] [17] [17] ;
int arr_17 [14] ;
long long int arr_22 [16] ;
signed char arr_25 [23] [23] ;
int arr_26 [23] [23] ;
unsigned char arr_28 [23] [23] ;
unsigned int arr_29 [23] [23] ;
unsigned long long int arr_30 [23] ;
short arr_31 [23] [23] [23] ;
short arr_32 [23] [23] [23] ;
int arr_33 [23] [23] ;
_Bool arr_34 [19] ;
_Bool arr_38 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -791392667679765300LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1592572726 : 2055182857;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)109 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 7909575250754887393LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)10026;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 2067731821;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = -2196674424778735516LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = 1333588570;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)191 : (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_29 [i_0] [i_1] = 520412330U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = 7957127619780953897ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (short)5949;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)8137 : (short)-10588;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? -728803626 : -2000588411;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
