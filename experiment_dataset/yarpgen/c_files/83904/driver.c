#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11865371169264542233ULL;
unsigned long long int var_2 = 6589854382585421769ULL;
signed char var_4 = (signed char)-59;
unsigned char var_6 = (unsigned char)21;
unsigned long long int var_7 = 6566492179799602525ULL;
signed char var_10 = (signed char)-45;
int var_12 = -1632339097;
unsigned char var_15 = (unsigned char)197;
unsigned long long int var_16 = 208141893457639590ULL;
signed char var_17 = (signed char)122;
unsigned long long int var_18 = 3966652743947521204ULL;
int zero = 0;
unsigned int var_19 = 3026328291U;
unsigned long long int var_20 = 15865903283436778003ULL;
unsigned char var_21 = (unsigned char)10;
int var_22 = -1850499649;
signed char var_23 = (signed char)67;
unsigned char var_24 = (unsigned char)209;
_Bool var_25 = (_Bool)0;
unsigned short arr_0 [12] [12] ;
long long int arr_3 [12] [12] [12] ;
unsigned short arr_4 [12] [12] [12] ;
unsigned char arr_11 [18] ;
int arr_12 [18] ;
int arr_13 [18] ;
unsigned char arr_14 [18] ;
short arr_7 [12] [12] ;
unsigned long long int arr_8 [12] [12] [12] ;
unsigned char arr_9 [12] ;
unsigned int arr_10 [12] ;
unsigned char arr_16 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)14280;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -6275196710135431077LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)45280;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = -1991918370;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -291012473;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (short)18938;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 12347365141109252043ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 426519736U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned char)131;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
