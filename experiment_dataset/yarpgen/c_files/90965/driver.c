#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-112;
short var_5 = (short)17900;
int var_6 = -607367830;
signed char var_7 = (signed char)32;
long long int var_9 = 4659931871606346815LL;
unsigned char var_10 = (unsigned char)188;
unsigned long long int var_12 = 15633703627620062658ULL;
signed char var_14 = (signed char)-23;
unsigned char var_15 = (unsigned char)169;
unsigned int var_16 = 3628422928U;
int zero = 0;
unsigned char var_17 = (unsigned char)88;
int var_18 = -29584995;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)12475;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)53212;
short arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned short arr_5 [18] [18] [18] [18] ;
unsigned char arr_7 [18] [18] ;
unsigned short arr_11 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-32457;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 16116021560880321164ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)65535;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)32515 : (unsigned short)26941;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
