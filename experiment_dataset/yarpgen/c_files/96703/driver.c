#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20917;
unsigned short var_4 = (unsigned short)53858;
_Bool var_6 = (_Bool)0;
long long int var_7 = 1296820682703586222LL;
long long int var_10 = -4935275977660117960LL;
unsigned int var_11 = 280425168U;
short var_12 = (short)-10361;
unsigned int var_13 = 2557183407U;
unsigned short var_14 = (unsigned short)22079;
short var_16 = (short)26580;
signed char var_18 = (signed char)-29;
int zero = 0;
unsigned long long int var_19 = 10447241421356209901ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1716219677U;
int var_22 = -1331688953;
unsigned int var_23 = 3450607784U;
_Bool var_24 = (_Bool)1;
long long int var_25 = -262079430741505862LL;
int var_26 = -371678735;
short var_27 = (short)29648;
unsigned long long int var_28 = 12286277213959290692ULL;
int var_29 = -1554276544;
unsigned char var_30 = (unsigned char)182;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 209062659U;
short var_33 = (short)8986;
long long int arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
int arr_2 [13] ;
unsigned long long int arr_7 [13] ;
unsigned short arr_9 [23] ;
_Bool arr_3 [13] ;
unsigned char arr_4 [13] [13] ;
int arr_5 [13] ;
unsigned short arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 497459749068850600LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2076612555 : 2003523658;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 14087428272817903474ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)17950;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)110 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -676561920 : 1493859369;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)35488;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
