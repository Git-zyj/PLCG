#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2704704485160938343LL;
long long int var_1 = 2263893931839003937LL;
signed char var_2 = (signed char)-122;
unsigned long long int var_3 = 13075956654936030586ULL;
signed char var_4 = (signed char)43;
signed char var_5 = (signed char)52;
unsigned char var_6 = (unsigned char)71;
_Bool var_8 = (_Bool)0;
int var_9 = 301684094;
unsigned char var_10 = (unsigned char)12;
signed char var_11 = (signed char)89;
short var_12 = (short)16739;
int zero = 0;
long long int var_14 = -1725594685391680290LL;
int var_15 = 1061790445;
short var_16 = (short)20602;
unsigned char var_17 = (unsigned char)236;
int var_18 = 1362385117;
unsigned int var_19 = 2861079701U;
long long int var_20 = 3874357226091745151LL;
int var_21 = -1420236809;
int var_22 = -1464826549;
short var_23 = (short)-21972;
long long int var_24 = 1197902256641167458LL;
short arr_0 [20] [20] ;
_Bool arr_6 [20] [20] [20] [20] ;
_Bool arr_7 [20] [20] [20] ;
unsigned long long int arr_8 [20] [20] [20] ;
unsigned long long int arr_11 [20] ;
unsigned char arr_13 [20] [20] [20] [20] ;
unsigned char arr_14 [20] [20] [20] [20] ;
unsigned long long int arr_23 [19] ;
unsigned long long int arr_24 [19] ;
unsigned long long int arr_10 [20] [20] [20] [20] ;
signed char arr_20 [14] [14] [14] ;
long long int arr_21 [14] ;
short arr_22 [14] ;
unsigned char arr_27 [19] ;
unsigned char arr_28 [19] ;
signed char arr_29 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-16031;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 11926809526729395873ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 18244679451919724379ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = 16617580251162528404ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = 10627994395907080508ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 11927881488895780390ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = -6079823702287499955LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (short)-18715;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (signed char)92;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
