#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)155;
signed char var_3 = (signed char)78;
int var_4 = -962866813;
long long int var_5 = -1498597985097622079LL;
unsigned int var_6 = 1180922371U;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int var_12 = -396232820;
int zero = 0;
long long int var_13 = -3191545846883584382LL;
unsigned int var_14 = 498396880U;
unsigned char var_15 = (unsigned char)138;
unsigned char var_16 = (unsigned char)231;
unsigned int var_17 = 208128735U;
long long int var_18 = 785102117965911466LL;
unsigned short var_19 = (unsigned short)16827;
signed char var_20 = (signed char)16;
int var_21 = -1293507708;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)167;
long long int var_24 = -6147440104339811051LL;
signed char arr_5 [11] ;
unsigned int arr_8 [11] [11] [11] [11] ;
unsigned long long int arr_14 [14] ;
long long int arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3147763692U : 768430641U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 5734831052480858146ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 3747216956493983671LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
