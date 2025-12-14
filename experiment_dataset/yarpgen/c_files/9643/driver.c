#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4184340548U;
short var_3 = (short)18078;
short var_4 = (short)724;
int var_6 = 1179276740;
unsigned short var_7 = (unsigned short)9264;
_Bool var_8 = (_Bool)0;
int var_9 = 347885146;
int var_10 = 645141549;
unsigned char var_12 = (unsigned char)162;
unsigned char var_13 = (unsigned char)27;
unsigned char var_14 = (unsigned char)206;
short var_15 = (short)-19090;
unsigned char var_16 = (unsigned char)41;
int zero = 0;
short var_18 = (short)8957;
unsigned char var_19 = (unsigned char)107;
unsigned int var_20 = 3180359177U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)25320;
unsigned long long int var_23 = 1817663126870773058ULL;
short var_24 = (short)21916;
unsigned char var_25 = (unsigned char)40;
short var_26 = (short)-27292;
short var_27 = (short)18735;
unsigned int var_28 = 3394868745U;
long long int arr_3 [19] ;
unsigned short arr_4 [19] [19] [19] ;
short arr_10 [19] [19] [19] ;
unsigned long long int arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -6531077407328627761LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)7382;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-12735 : (short)24770;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 10758737714176402313ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
