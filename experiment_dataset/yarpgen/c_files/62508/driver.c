#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)157;
short var_4 = (short)-17033;
unsigned char var_5 = (unsigned char)182;
short var_6 = (short)-27748;
signed char var_7 = (signed char)28;
signed char var_8 = (signed char)122;
signed char var_10 = (signed char)61;
unsigned long long int var_11 = 15588653359269768202ULL;
unsigned long long int var_12 = 6756853889319832971ULL;
short var_13 = (short)-20873;
int zero = 0;
unsigned char var_14 = (unsigned char)233;
short var_15 = (short)24426;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)11;
unsigned long long int var_18 = 17557836426782363150ULL;
signed char arr_1 [10] ;
unsigned long long int arr_2 [10] ;
signed char arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-20 : (signed char)-65;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13688531790671306919ULL : 2602858392012151306ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-21 : (signed char)-105;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
