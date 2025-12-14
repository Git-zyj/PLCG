#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8372617822804251840LL;
unsigned long long int var_4 = 9802275230144654285ULL;
unsigned char var_5 = (unsigned char)96;
unsigned long long int var_7 = 2920018026560281688ULL;
long long int var_8 = -3117070551544060728LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)57817;
int var_12 = -1811174131;
unsigned short var_13 = (unsigned short)57599;
int var_15 = 1771465877;
long long int var_18 = 8974948904463472771LL;
signed char var_19 = (signed char)83;
int zero = 0;
int var_20 = 1439831435;
unsigned long long int var_21 = 14877887184200296027ULL;
unsigned long long int var_22 = 2073617417295574919ULL;
unsigned int var_23 = 3484746100U;
long long int var_24 = 5437900219302776491LL;
unsigned char var_25 = (unsigned char)23;
long long int arr_0 [19] [19] ;
short arr_3 [19] ;
long long int arr_5 [19] [19] [19] ;
unsigned long long int arr_6 [19] [19] [19] [19] ;
int arr_8 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2276265432552892346LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)19929;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2434972862667279803LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3904261357954786438ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1182865379 : -1629300550;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
