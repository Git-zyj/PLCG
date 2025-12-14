#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 623920826404065477LL;
unsigned short var_2 = (unsigned short)18201;
long long int var_6 = 2418527813341548937LL;
short var_10 = (short)3832;
signed char var_11 = (signed char)-112;
unsigned short var_12 = (unsigned short)6142;
int zero = 0;
unsigned long long int var_13 = 1976817451601634729ULL;
unsigned char var_14 = (unsigned char)2;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)56000;
int var_17 = 1469365621;
unsigned int var_18 = 2594114349U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)157;
unsigned char var_21 = (unsigned char)228;
int var_22 = -1503071131;
long long int var_23 = -8181768913871354380LL;
unsigned char var_24 = (unsigned char)118;
unsigned short var_25 = (unsigned short)33065;
_Bool var_26 = (_Bool)0;
short var_27 = (short)27087;
long long int var_28 = -4860880800653631972LL;
signed char var_29 = (signed char)-79;
int arr_2 [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
unsigned long long int arr_5 [12] [12] [12] ;
int arr_10 [12] ;
long long int arr_12 [12] ;
unsigned int arr_17 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1662656185;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 18038385025005076331ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1293017776882214354ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = -1760897452;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = -3119734741473402310LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 1191674063U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
