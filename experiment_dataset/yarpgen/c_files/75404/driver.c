#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
unsigned short var_2 = (unsigned short)31162;
signed char var_6 = (signed char)117;
unsigned short var_7 = (unsigned short)40578;
signed char var_8 = (signed char)-112;
unsigned short var_9 = (unsigned short)27354;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-85;
unsigned short var_15 = (unsigned short)6284;
int zero = 0;
long long int var_16 = -3225200465611005377LL;
short var_17 = (short)15595;
short var_18 = (short)-16049;
unsigned short var_19 = (unsigned short)64794;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1132062504435821667LL;
long long int var_22 = -1966486367154061488LL;
_Bool var_23 = (_Bool)1;
int var_24 = -830481681;
unsigned long long int var_25 = 11666315245991021069ULL;
unsigned long long int var_26 = 17249097030035723848ULL;
signed char var_27 = (signed char)33;
long long int var_28 = -8762612859587565168LL;
unsigned char var_29 = (unsigned char)191;
_Bool arr_0 [14] [14] ;
unsigned short arr_1 [14] [14] ;
signed char arr_2 [24] ;
int arr_3 [24] ;
int arr_4 [24] [24] ;
unsigned long long int arr_5 [22] [22] ;
_Bool arr_7 [22] ;
long long int arr_8 [19] [19] ;
signed char arr_21 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)7602;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1512988299 : 1737351272;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1611488748 : -1230794592;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 9364188219633323461ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -4900732100479985001LL : -4735170861595285021LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-37 : (signed char)-107;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
