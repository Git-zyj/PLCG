#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4716;
unsigned int var_1 = 2030587978U;
long long int var_2 = -2316214558958860290LL;
unsigned char var_3 = (unsigned char)123;
unsigned long long int var_5 = 2670592676561677115ULL;
unsigned short var_8 = (unsigned short)30763;
short var_9 = (short)2328;
unsigned long long int var_10 = 918020954443110002ULL;
unsigned char var_12 = (unsigned char)150;
unsigned long long int var_13 = 16271192296488551603ULL;
unsigned int var_14 = 1645437610U;
unsigned short var_15 = (unsigned short)16177;
long long int var_16 = -854862337844570826LL;
unsigned long long int var_17 = 13055614966150661409ULL;
long long int var_19 = -1942846137111957017LL;
int zero = 0;
long long int var_20 = -9040389938755868518LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)4480;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-16544;
unsigned char var_25 = (unsigned char)35;
short var_26 = (short)25237;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)-61;
unsigned int var_29 = 3621954587U;
_Bool var_30 = (_Bool)1;
int var_31 = 1292660941;
long long int var_32 = -6111339143163456516LL;
unsigned int var_33 = 2917295130U;
unsigned long long int var_34 = 9549484314762888454ULL;
unsigned long long int var_35 = 2366670992919209871ULL;
unsigned int var_36 = 2243306959U;
unsigned long long int var_37 = 7718196783183056412ULL;
unsigned long long int var_38 = 16238652291942725944ULL;
unsigned long long int var_39 = 1419403621547217622ULL;
unsigned int var_40 = 4012712691U;
signed char var_41 = (signed char)-94;
int var_42 = -95940666;
short var_43 = (short)2735;
_Bool var_44 = (_Bool)0;
unsigned long long int var_45 = 14895584303194394124ULL;
int var_46 = 1133830948;
long long int arr_0 [22] ;
long long int arr_1 [22] [22] ;
signed char arr_3 [22] [22] [22] ;
_Bool arr_4 [22] ;
unsigned int arr_7 [22] [22] ;
signed char arr_8 [22] [22] [22] [22] ;
short arr_9 [22] [22] [22] ;
long long int arr_10 [22] [22] [22] [22] [22] ;
long long int arr_13 [22] [22] [22] ;
signed char arr_14 [22] [22] ;
unsigned char arr_18 [16] ;
unsigned char arr_28 [16] [16] ;
signed char arr_34 [15] [15] ;
int arr_37 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_5 [22] [22] ;
unsigned char arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 8499939507529462461LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 7358194739421917790LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 684135887U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-14031 : (short)-28250;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 5077680236755337646LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 7140712271947714888LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_34 [i_0] [i_1] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1610829639;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 821814077U : 2892933795U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)192 : (unsigned char)36;
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
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
