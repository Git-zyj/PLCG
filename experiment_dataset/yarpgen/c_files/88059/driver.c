#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
int var_1 = -1869596141;
unsigned char var_2 = (unsigned char)99;
long long int var_3 = -3290162378867996383LL;
int var_4 = -1694801732;
unsigned char var_6 = (unsigned char)67;
signed char var_11 = (signed char)108;
unsigned long long int var_12 = 5191506359454171301ULL;
long long int var_16 = -3059632686069669365LL;
int zero = 0;
int var_17 = -1850037007;
_Bool var_18 = (_Bool)0;
short var_19 = (short)30478;
unsigned char var_20 = (unsigned char)194;
unsigned long long int var_21 = 16087711609466676312ULL;
long long int var_22 = 5258444820943717475LL;
short var_23 = (short)-17967;
signed char var_24 = (signed char)57;
long long int var_25 = -7826350408318131356LL;
signed char var_26 = (signed char)50;
signed char var_27 = (signed char)10;
unsigned long long int var_28 = 7867226417281375696ULL;
short var_29 = (short)22701;
unsigned long long int var_30 = 8948889584422680533ULL;
signed char var_31 = (signed char)50;
unsigned long long int arr_0 [14] ;
_Bool arr_4 [16] ;
long long int arr_6 [16] [16] ;
unsigned long long int arr_7 [16] ;
unsigned short arr_8 [16] [16] ;
unsigned int arr_9 [16] ;
unsigned short arr_10 [16] [16] ;
signed char arr_14 [16] [16] ;
long long int arr_15 [16] [16] ;
long long int arr_2 [14] ;
long long int arr_3 [14] ;
unsigned char arr_12 [16] ;
int arr_17 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 4629830069611187565ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 2115166634051038763LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 4332771380138419414ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)35418;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 3456765677U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)8095;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 6180299322892101964LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1385676024598075922LL : -1508782892265985512LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8437599718642904880LL : 1777474574041993020LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = -877631513;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
