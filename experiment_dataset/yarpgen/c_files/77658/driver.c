#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8392731357803257488LL;
unsigned char var_1 = (unsigned char)171;
unsigned char var_4 = (unsigned char)137;
unsigned char var_5 = (unsigned char)216;
short var_6 = (short)3418;
int var_7 = -732219912;
long long int var_8 = -8355731147261734947LL;
int var_9 = -1648031407;
long long int var_10 = 2038097366444590344LL;
unsigned char var_11 = (unsigned char)123;
signed char var_12 = (signed char)-42;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)13276;
unsigned int var_15 = 2636016951U;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7287295415419848713LL;
unsigned int var_18 = 2216284432U;
unsigned long long int var_19 = 13204179655046491303ULL;
unsigned char var_20 = (unsigned char)80;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)179;
signed char var_23 = (signed char)29;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
long long int var_26 = -5022466406577193886LL;
unsigned int arr_0 [25] [25] ;
int arr_1 [25] ;
signed char arr_3 [25] ;
_Bool arr_4 [25] [25] ;
signed char arr_8 [15] ;
int arr_9 [15] ;
unsigned int arr_2 [25] [25] ;
long long int arr_16 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 3403882041U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1120259882;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 1527932068;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 4213651679U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 2333788314965470006LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
