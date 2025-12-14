#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)217;
long long int var_2 = -1348556653595244851LL;
unsigned long long int var_3 = 9206216299580472631ULL;
unsigned int var_4 = 3061880857U;
unsigned int var_5 = 1425173470U;
short var_6 = (short)-16122;
unsigned int var_7 = 2041126814U;
unsigned short var_8 = (unsigned short)58099;
int var_9 = 148302712;
int var_10 = -1606075348;
_Bool var_11 = (_Bool)1;
short var_12 = (short)4292;
unsigned long long int var_13 = 9992988090642950877ULL;
signed char var_14 = (signed char)88;
int zero = 0;
unsigned int var_15 = 2154581311U;
unsigned char var_16 = (unsigned char)42;
short var_17 = (short)-23093;
short var_18 = (short)-11621;
long long int var_19 = -4136216592727531864LL;
signed char var_20 = (signed char)-20;
unsigned long long int var_21 = 13193847541436752306ULL;
unsigned int var_22 = 132388688U;
unsigned long long int var_23 = 15991066560801205122ULL;
unsigned long long int arr_4 [22] ;
short arr_10 [22] [22] [22] ;
signed char arr_2 [22] ;
unsigned int arr_6 [22] [22] ;
unsigned long long int arr_13 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 16148344649034222477ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-7049;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-99 : (signed char)-89;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1904520785U : 2089201926U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 17207094637558087467ULL : 10169067564750455052ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
