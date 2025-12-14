#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)25;
unsigned char var_5 = (unsigned char)153;
unsigned char var_7 = (unsigned char)209;
signed char var_8 = (signed char)87;
unsigned char var_9 = (unsigned char)50;
signed char var_10 = (signed char)77;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)31182;
unsigned short var_13 = (unsigned short)56333;
unsigned char var_15 = (unsigned char)16;
long long int var_16 = -2762232444478417425LL;
unsigned char var_18 = (unsigned char)24;
int zero = 0;
signed char var_20 = (signed char)-96;
unsigned long long int var_21 = 13498214289515906744ULL;
unsigned long long int var_22 = 9179556252716990872ULL;
long long int var_23 = 8085096777538569910LL;
unsigned int var_24 = 1952177295U;
unsigned char var_25 = (unsigned char)118;
short var_26 = (short)-3222;
signed char var_27 = (signed char)96;
short var_28 = (short)-6936;
long long int var_29 = -1935451793290605566LL;
long long int arr_0 [23] ;
signed char arr_1 [23] ;
_Bool arr_2 [23] [23] [23] ;
unsigned char arr_4 [23] [23] [23] [23] ;
unsigned char arr_5 [23] [23] [23] [23] ;
long long int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 7139583996376750712LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 6376098420054958426LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
