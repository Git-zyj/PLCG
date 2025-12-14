#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16933757436121663857ULL;
unsigned short var_1 = (unsigned short)63565;
unsigned long long int var_3 = 6096375343653245957ULL;
unsigned long long int var_4 = 17804448579294180522ULL;
unsigned char var_5 = (unsigned char)117;
unsigned char var_6 = (unsigned char)111;
long long int var_7 = 3933979611153297379LL;
unsigned long long int var_8 = 6079209005651380943ULL;
unsigned char var_9 = (unsigned char)23;
unsigned int var_10 = 234694423U;
unsigned int var_11 = 347641285U;
unsigned long long int var_13 = 9143793084881977315ULL;
long long int var_14 = -2951950806011077598LL;
unsigned long long int var_15 = 5800006950230823981ULL;
int zero = 0;
signed char var_16 = (signed char)-15;
unsigned int var_17 = 1071991066U;
long long int var_18 = -6296037371860447264LL;
long long int var_19 = 1544626682933139294LL;
unsigned int var_20 = 3718684649U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)147;
unsigned char arr_0 [11] [11] ;
_Bool arr_1 [11] ;
long long int arr_2 [11] [11] [11] ;
signed char arr_5 [11] [11] [11] [11] ;
unsigned int arr_6 [11] [11] [11] [11] ;
unsigned int arr_12 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -6912091566259303112LL : -7533043411794784109LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 433716011U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 71511335U : 2132538898U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
