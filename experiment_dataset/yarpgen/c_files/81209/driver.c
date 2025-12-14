#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 1928923434;
unsigned int var_4 = 1128866976U;
int var_5 = 1369142225;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 15122707153850131381ULL;
signed char var_8 = (signed char)18;
long long int var_9 = -8196768793850560792LL;
short var_10 = (short)-13404;
short var_11 = (short)-11918;
unsigned char var_12 = (unsigned char)224;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3729376822U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-18929;
unsigned short var_17 = (unsigned short)39175;
int zero = 0;
short var_18 = (short)-22970;
unsigned long long int var_19 = 7503222851500190768ULL;
unsigned long long int var_20 = 9357059980075043440ULL;
long long int var_21 = 4292583880693800494LL;
signed char var_22 = (signed char)-76;
unsigned short var_23 = (unsigned short)36696;
_Bool var_24 = (_Bool)1;
short var_25 = (short)-4637;
unsigned int var_26 = 2610139686U;
unsigned long long int var_27 = 12607119300568432809ULL;
signed char var_28 = (signed char)-109;
unsigned int var_29 = 3783366418U;
unsigned int var_30 = 1466799130U;
_Bool var_31 = (_Bool)1;
unsigned char var_32 = (unsigned char)96;
_Bool var_33 = (_Bool)0;
unsigned char arr_0 [15] ;
unsigned int arr_2 [15] ;
unsigned int arr_3 [15] ;
unsigned char arr_4 [15] [15] [15] ;
unsigned short arr_5 [15] ;
unsigned short arr_8 [15] [15] [15] [15] ;
long long int arr_9 [15] [15] [15] [15] ;
unsigned short arr_10 [15] ;
unsigned char arr_11 [15] [15] [15] [15] ;
unsigned int arr_14 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 4099516916U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 397948565U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)27178;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)10154;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -7439137869805751065LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned short)52271;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 323624744U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
