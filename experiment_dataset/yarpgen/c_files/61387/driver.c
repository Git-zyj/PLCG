#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
unsigned int var_1 = 3841611366U;
signed char var_2 = (signed char)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13457359351632369395ULL;
unsigned int var_5 = 310605788U;
signed char var_6 = (signed char)48;
long long int var_8 = 2286566375978261153LL;
unsigned int var_9 = 2937422745U;
unsigned int var_10 = 3992528353U;
unsigned short var_11 = (unsigned short)26331;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)59594;
unsigned int var_16 = 3144743618U;
unsigned long long int var_17 = 3192736361290049558ULL;
long long int var_18 = 6023261899285460604LL;
int zero = 0;
unsigned long long int var_20 = 15655860092464883976ULL;
long long int var_21 = 8041392915301948147LL;
long long int var_22 = -2027862043595287985LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 9119766540383335630ULL;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 321307323U;
short var_28 = (short)7441;
_Bool var_29 = (_Bool)0;
signed char var_30 = (signed char)114;
unsigned int var_31 = 2765103174U;
int var_32 = 2120048952;
unsigned int var_33 = 2313324352U;
unsigned short var_34 = (unsigned short)53620;
unsigned short var_35 = (unsigned short)50259;
unsigned int var_36 = 794149955U;
long long int var_37 = -1371207837994186002LL;
unsigned long long int var_38 = 2491402889317601478ULL;
unsigned short var_39 = (unsigned short)35910;
unsigned int var_40 = 2204391392U;
unsigned long long int var_41 = 13143165339411898381ULL;
long long int arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
unsigned char arr_2 [17] ;
long long int arr_3 [17] ;
unsigned short arr_4 [17] [17] [17] ;
long long int arr_6 [17] [17] [17] [17] ;
signed char arr_7 [17] [17] [17] ;
long long int arr_8 [17] [17] [17] ;
unsigned short arr_9 [17] [17] [17] [17] ;
unsigned long long int arr_11 [17] [17] ;
long long int arr_13 [17] [17] [17] [17] [17] ;
long long int arr_15 [17] [17] [17] ;
signed char arr_18 [17] [17] ;
unsigned short arr_19 [17] [17] [17] ;
unsigned long long int arr_21 [17] [17] [17] [17] ;
int arr_27 [22] [22] ;
unsigned short arr_28 [22] ;
unsigned int arr_29 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -5019273933035996392LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)32708;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1691695651300204443LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)17599;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 7954632337067743398LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -3631681739343462574LL : -2367078424498399560LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)65302 : (unsigned short)22339;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = 3125202773836215809ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -5913340893896567990LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -6018176564916605091LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)49001;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 3935650563801427177ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? -1648346440 : -877529567;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = (unsigned short)43815;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? 2615266650U : 2113067987U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
