#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 562386496135231436LL;
_Bool var_7 = (_Bool)1;
short var_11 = (short)-28362;
long long int var_12 = -4608363094620516117LL;
signed char var_15 = (signed char)-107;
signed char var_16 = (signed char)-33;
signed char var_18 = (signed char)-112;
unsigned long long int var_19 = 4776698480436064149ULL;
int zero = 0;
signed char var_20 = (signed char)79;
signed char var_21 = (signed char)-48;
signed char var_22 = (signed char)55;
short var_23 = (short)23345;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)8;
long long int var_26 = 8400864069058728426LL;
signed char var_27 = (signed char)-80;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)21;
signed char var_30 = (signed char)2;
signed char var_31 = (signed char)-57;
signed char var_32 = (signed char)70;
long long int var_33 = -3382197774420980530LL;
long long int var_34 = 8238048998157205114LL;
long long int arr_0 [11] ;
signed char arr_3 [16] [16] ;
_Bool arr_4 [16] ;
unsigned long long int arr_13 [20] ;
unsigned long long int arr_17 [12] ;
_Bool arr_19 [12] [12] ;
long long int arr_21 [12] ;
signed char arr_2 [11] ;
long long int arr_7 [16] ;
long long int arr_10 [16] ;
short arr_11 [16] [16] [16] ;
unsigned long long int arr_12 [16] ;
int arr_15 [20] ;
signed char arr_22 [12] ;
short arr_25 [12] ;
long long int arr_26 [12] ;
signed char arr_29 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -8004438035241117289LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 3550013418623315133ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 13110297079001915306ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 3864509618780494330LL : 3496177550402533634LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -5881974999434985706LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = -2184570004082184371LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)487;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 12682362309315432666ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = -687488707;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)48 : (signed char)-5;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (short)-15704 : (short)-10418;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = -89942092004305353LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_29 [i_0] = (signed char)32;
}

void checksum() {
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
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
