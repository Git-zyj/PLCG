#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11976289375234873822ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2492110945U;
signed char var_3 = (signed char)101;
short var_4 = (short)-32532;
signed char var_5 = (signed char)-102;
short var_8 = (short)-17283;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)24360;
short var_13 = (short)-9462;
short var_16 = (short)15201;
int zero = 0;
short var_17 = (short)-18722;
short var_18 = (short)4703;
unsigned long long int var_19 = 12222352573565422391ULL;
unsigned int var_20 = 4083707837U;
signed char arr_0 [15] ;
unsigned long long int arr_2 [15] ;
int arr_3 [15] [15] [15] ;
long long int arr_4 [15] [15] ;
long long int arr_6 [20] ;
unsigned char arr_8 [20] [20] ;
signed char arr_10 [20] ;
unsigned long long int arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 15753934382684746640ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -188518716;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 8793845571259356012LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 6605235699113846964LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)75 : (signed char)104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 6004279010881099219ULL : 17030305262279694680ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
