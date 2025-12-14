#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3157;
short var_4 = (short)32623;
unsigned char var_6 = (unsigned char)65;
int var_7 = 1022465580;
unsigned short var_9 = (unsigned short)7888;
unsigned long long int var_11 = 16052703501824164088ULL;
int zero = 0;
short var_12 = (short)-32584;
unsigned int var_13 = 3039798053U;
unsigned short var_14 = (unsigned short)50105;
short var_15 = (short)-13448;
unsigned long long int var_16 = 12705664554390532961ULL;
unsigned int arr_2 [20] [20] ;
unsigned long long int arr_4 [22] ;
unsigned char arr_5 [22] ;
unsigned long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 2676204608U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 15578600467873352401ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)3 : (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 453643040384381299ULL : 9583330658326827964ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
