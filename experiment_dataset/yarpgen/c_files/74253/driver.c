#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = 1635536232041336685LL;
long long int var_5 = -2309065659865532936LL;
unsigned int var_9 = 1982621284U;
unsigned char var_10 = (unsigned char)242;
unsigned char var_11 = (unsigned char)1;
long long int var_12 = -1277104858784812994LL;
int var_13 = -911457407;
int zero = 0;
signed char var_16 = (signed char)-105;
signed char var_17 = (signed char)62;
unsigned int var_18 = 4062671175U;
signed char var_19 = (signed char)-28;
unsigned char var_20 = (unsigned char)210;
unsigned short var_21 = (unsigned short)25517;
unsigned int var_22 = 2879298038U;
signed char var_23 = (signed char)-85;
unsigned int var_24 = 4030160783U;
unsigned short var_25 = (unsigned short)39486;
signed char var_26 = (signed char)-72;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
int var_29 = 644043956;
unsigned long long int var_30 = 7500018726032282316ULL;
short arr_0 [14] [14] ;
unsigned long long int arr_1 [14] [14] ;
int arr_2 [14] [14] ;
unsigned int arr_3 [14] [14] [14] ;
short arr_4 [14] ;
_Bool arr_5 [14] ;
unsigned int arr_8 [14] ;
long long int arr_10 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-26057;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 5306921819404494257ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 423342467;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3851586102U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)-21291;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 779294552U : 3748638324U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = -427534217429748597LL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
