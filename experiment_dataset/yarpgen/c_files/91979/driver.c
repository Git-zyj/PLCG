#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)30691;
unsigned char var_3 = (unsigned char)247;
_Bool var_5 = (_Bool)1;
short var_6 = (short)30873;
unsigned short var_8 = (unsigned short)6559;
signed char var_9 = (signed char)23;
short var_10 = (short)29031;
short var_11 = (short)31952;
signed char var_12 = (signed char)-85;
int var_14 = -1920463580;
unsigned long long int var_15 = 16803027431762543536ULL;
int zero = 0;
int var_16 = -1807203161;
short var_17 = (short)-11097;
unsigned char var_18 = (unsigned char)156;
_Bool var_19 = (_Bool)1;
short var_20 = (short)18042;
short var_21 = (short)-28613;
long long int var_22 = 647382980749600279LL;
unsigned long long int var_23 = 16053713140150735860ULL;
unsigned char var_24 = (unsigned char)157;
signed char arr_0 [18] [18] ;
short arr_1 [18] [18] ;
unsigned char arr_5 [18] [18] [18] ;
unsigned short arr_6 [18] [18] ;
short arr_7 [18] [18] [18] [18] ;
unsigned char arr_8 [15] ;
signed char arr_13 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)29616;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)15573;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)25841;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-81 : (signed char)-23;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
