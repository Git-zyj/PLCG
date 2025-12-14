#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14598770996982333396ULL;
int var_2 = -606446322;
unsigned short var_6 = (unsigned short)54790;
unsigned short var_7 = (unsigned short)20382;
unsigned char var_8 = (unsigned char)207;
unsigned short var_11 = (unsigned short)15670;
int var_12 = -1364499320;
unsigned char var_13 = (unsigned char)178;
int var_14 = -692868472;
int var_15 = 875999130;
short var_16 = (short)-18307;
unsigned long long int var_17 = 9357759228952615906ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)31472;
unsigned long long int var_19 = 4359068568535061422ULL;
unsigned long long int var_20 = 15376367405930669689ULL;
unsigned char var_21 = (unsigned char)123;
int var_22 = -1440064691;
unsigned long long int var_23 = 9702944488600440237ULL;
int var_24 = 169213700;
unsigned long long int var_25 = 15344302881673472564ULL;
short var_26 = (short)3576;
short var_27 = (short)11519;
short var_28 = (short)-7530;
int var_29 = 1833444415;
int var_30 = 1413519858;
unsigned char var_31 = (unsigned char)36;
unsigned short var_32 = (unsigned short)34551;
unsigned char var_33 = (unsigned char)139;
int var_34 = -1760930299;
int arr_0 [18] ;
int arr_2 [18] [18] ;
int arr_6 [18] ;
unsigned char arr_8 [18] [18] [18] [18] ;
unsigned short arr_10 [18] [18] ;
unsigned char arr_12 [18] [18] [18] [18] [18] ;
int arr_16 [18] [18] [18] [18] [18] ;
int arr_13 [18] [18] [18] ;
int arr_24 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1247883444;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 1280145353;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 1596945339;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)35134;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 1496759243;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1772300411;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = -41772373;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
