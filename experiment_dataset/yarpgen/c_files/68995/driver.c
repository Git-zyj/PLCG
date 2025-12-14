#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17452676443345533879ULL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)17396;
long long int var_4 = 2905836005722684706LL;
unsigned long long int var_5 = 8810209753531581891ULL;
signed char var_6 = (signed char)-84;
unsigned long long int var_8 = 7554737716857270468ULL;
long long int var_9 = 9104278579671501981LL;
unsigned short var_12 = (unsigned short)54339;
long long int var_13 = 4593753536982295758LL;
int zero = 0;
short var_15 = (short)-4729;
unsigned long long int var_16 = 12028464798231130381ULL;
long long int var_17 = -4017097618510209944LL;
short var_18 = (short)2575;
_Bool var_19 = (_Bool)1;
short var_20 = (short)1490;
_Bool var_21 = (_Bool)1;
unsigned long long int arr_0 [17] ;
_Bool arr_2 [17] [17] ;
unsigned char arr_3 [17] ;
signed char arr_4 [17] ;
signed char arr_5 [17] [17] [17] ;
long long int arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 7210968243112120071ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-118 : (signed char)46;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1689739352797322170LL : -5126957628935752752LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
