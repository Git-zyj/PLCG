#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61240;
signed char var_6 = (signed char)57;
unsigned char var_7 = (unsigned char)156;
unsigned char var_9 = (unsigned char)210;
unsigned int var_12 = 798144405U;
long long int var_15 = 7468694961251688516LL;
signed char var_16 = (signed char)-121;
signed char var_17 = (signed char)-52;
unsigned char var_18 = (unsigned char)183;
signed char var_19 = (signed char)107;
int zero = 0;
signed char var_20 = (signed char)-108;
signed char var_21 = (signed char)126;
unsigned long long int var_22 = 11986248977831851928ULL;
unsigned char var_23 = (unsigned char)142;
unsigned char var_24 = (unsigned char)117;
int var_25 = 1926835543;
long long int var_26 = -4705296226440118989LL;
long long int var_27 = 807607743164369423LL;
signed char arr_0 [23] [23] ;
signed char arr_1 [23] ;
unsigned short arr_2 [23] [23] ;
unsigned short arr_3 [23] [23] [23] ;
unsigned int arr_11 [15] ;
long long int arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)463;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)36969;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 4144091458U : 4232211556U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 5058944737840885835LL : 3578477273343590317LL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
