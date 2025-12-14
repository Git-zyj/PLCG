#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
unsigned long long int var_1 = 6282751651747013560ULL;
signed char var_2 = (signed char)-8;
unsigned char var_3 = (unsigned char)190;
short var_4 = (short)10531;
unsigned int var_5 = 3300157258U;
unsigned long long int var_6 = 12726859176667170996ULL;
unsigned char var_7 = (unsigned char)19;
unsigned long long int var_8 = 7809716951737832512ULL;
unsigned long long int var_9 = 8438871138704512989ULL;
unsigned long long int var_11 = 6736152235972182611ULL;
long long int var_12 = 4296567868608742217LL;
int zero = 0;
unsigned char var_13 = (unsigned char)44;
long long int var_14 = -5604957482012623461LL;
signed char var_15 = (signed char)54;
signed char var_16 = (signed char)60;
unsigned char var_17 = (unsigned char)41;
unsigned char var_18 = (unsigned char)30;
short var_19 = (short)3756;
signed char var_20 = (signed char)-5;
unsigned int var_21 = 1059710174U;
long long int var_22 = 7636244234301240350LL;
short var_23 = (short)31215;
long long int var_24 = -7188304421630940728LL;
unsigned long long int var_25 = 8541193085200835816ULL;
short var_26 = (short)27027;
long long int var_27 = -5325651731949254531LL;
int var_28 = 1258778015;
unsigned long long int var_29 = 14325101976115503569ULL;
_Bool var_30 = (_Bool)0;
signed char var_31 = (signed char)-113;
short var_32 = (short)-14216;
int arr_0 [23] ;
unsigned short arr_1 [23] ;
_Bool arr_2 [23] [23] ;
unsigned int arr_3 [23] ;
unsigned long long int arr_4 [23] ;
unsigned short arr_5 [23] ;
unsigned short arr_6 [23] ;
int arr_7 [23] [23] [23] [23] ;
short arr_8 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_10 [23] [23] [23] [23] [23] ;
unsigned short arr_11 [20] ;
short arr_12 [20] [20] ;
unsigned int arr_13 [20] ;
long long int arr_16 [20] ;
signed char arr_17 [20] [20] [20] ;
signed char arr_18 [20] [20] [20] [20] ;
long long int arr_21 [20] [20] [20] [20] [20] [20] ;
unsigned char arr_22 [20] [20] [20] [20] [20] ;
unsigned char arr_23 [20] [20] [20] [20] [20] ;
signed char arr_27 [20] [20] ;
unsigned long long int arr_35 [20] [20] [20] [20] [20] ;
short arr_36 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -532483398;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)36112;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3914812466U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 14423805377639594594ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)61052;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)20707;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -603617574;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)2042;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (unsigned short)30687;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (short)28014;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 175482021U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = 2957538805357434777LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -5456484588069311880LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_27 [i_0] [i_1] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = 9253484813020928831ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (short)-22727 : (short)266;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
