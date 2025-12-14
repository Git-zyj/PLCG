#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22083;
short var_2 = (short)26775;
signed char var_3 = (signed char)82;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)182;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 14198137053161230240ULL;
unsigned long long int var_15 = 12852370557296393411ULL;
int zero = 0;
unsigned long long int var_16 = 18172837829136413644ULL;
unsigned short var_17 = (unsigned short)37992;
unsigned long long int var_18 = 430094863595865800ULL;
int var_19 = -820029252;
long long int arr_0 [10] [10] ;
unsigned char arr_1 [10] ;
unsigned int arr_6 [10] ;
unsigned short arr_11 [10] ;
_Bool arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 5152475688211540481LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 3680479403U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7648 : (unsigned short)43788;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
