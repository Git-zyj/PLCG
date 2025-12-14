#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12374;
unsigned int var_1 = 442007222U;
unsigned short var_3 = (unsigned short)22847;
long long int var_4 = -2982217111312673675LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_8 = 1093977055;
int zero = 0;
unsigned long long int var_10 = 13889202813534016226ULL;
unsigned int var_11 = 4116277850U;
unsigned short var_12 = (unsigned short)54070;
unsigned int var_13 = 4040862986U;
unsigned char arr_0 [11] [11] ;
unsigned char arr_1 [11] ;
signed char arr_5 [11] ;
signed char arr_7 [11] [11] [11] [11] ;
unsigned long long int arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 13159570634573735121ULL : 10292121450924172487ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
