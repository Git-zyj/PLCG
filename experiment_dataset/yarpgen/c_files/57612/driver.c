#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)63609;
long long int var_2 = -1777105350245427389LL;
short var_3 = (short)14236;
signed char var_4 = (signed char)-80;
long long int var_9 = -8489754747332178825LL;
unsigned int var_14 = 2859613384U;
long long int var_15 = 4482110091910595677LL;
int zero = 0;
signed char var_20 = (signed char)32;
unsigned char var_21 = (unsigned char)235;
unsigned short var_22 = (unsigned short)19315;
unsigned long long int var_23 = 13790720486483338393ULL;
short var_24 = (short)-14542;
int var_25 = 489499023;
unsigned long long int var_26 = 12421146063403834904ULL;
long long int var_27 = 198651506742369224LL;
short var_28 = (short)13997;
int var_29 = -989488967;
unsigned char arr_1 [15] ;
unsigned short arr_2 [15] [15] [15] ;
signed char arr_3 [15] ;
signed char arr_4 [15] [15] ;
long long int arr_5 [15] [15] ;
int arr_14 [15] ;
unsigned int arr_16 [15] [15] ;
int arr_10 [15] [15] [15] [15] ;
unsigned int arr_11 [15] ;
int arr_15 [15] ;
long long int arr_19 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)50190;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 6224966749132083545LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 529465852;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = 3883787499U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -1231574301;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 482168683U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = -553921993;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = 4953629996629290129LL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
