#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2552604554U;
unsigned char var_1 = (unsigned char)248;
unsigned long long int var_2 = 10943650122602828561ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1871635079U;
unsigned short var_5 = (unsigned short)26797;
unsigned int var_6 = 1217436491U;
unsigned int var_8 = 1856392766U;
unsigned char var_9 = (unsigned char)12;
long long int var_12 = 1494514886675802513LL;
unsigned long long int var_14 = 9831269216714191547ULL;
unsigned long long int var_17 = 10056823891426130087ULL;
int zero = 0;
int var_18 = -778520375;
unsigned long long int var_19 = 15694406761431556512ULL;
unsigned char var_20 = (unsigned char)77;
long long int var_21 = 173946770808460522LL;
int var_22 = 710458730;
unsigned char var_23 = (unsigned char)18;
int var_24 = 659003407;
long long int var_25 = 1292715667695781591LL;
signed char var_26 = (signed char)-70;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 2386312948U;
unsigned short var_29 = (unsigned short)54361;
unsigned char arr_0 [15] ;
int arr_1 [15] ;
unsigned char arr_2 [15] [15] ;
long long int arr_4 [15] [15] ;
unsigned short arr_7 [15] ;
unsigned short arr_9 [15] [15] [15] [15] ;
unsigned short arr_3 [15] ;
unsigned long long int arr_15 [15] [15] [15] ;
unsigned char arr_18 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1295711342;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -8162345264111641862LL : 3038444532818411923LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)16422;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)52508;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)1653;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5198701627939185755ULL : 5761613092360530864ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned char)149 : (unsigned char)244;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
