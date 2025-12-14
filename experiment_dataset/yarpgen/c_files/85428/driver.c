#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
int var_1 = 1850739545;
signed char var_3 = (signed char)-14;
unsigned int var_4 = 2946815474U;
unsigned long long int var_5 = 16697586241407513333ULL;
short var_6 = (short)-10601;
unsigned char var_8 = (unsigned char)255;
int zero = 0;
unsigned short var_10 = (unsigned short)46117;
long long int var_11 = -7444007785265345014LL;
int var_12 = 837717223;
unsigned short var_13 = (unsigned short)15503;
unsigned int var_14 = 3794771555U;
long long int var_15 = -1523465667709294388LL;
unsigned int var_16 = 929797249U;
int var_17 = 635238459;
unsigned short arr_0 [19] [19] ;
unsigned int arr_2 [19] ;
unsigned long long int arr_9 [19] [19] [19] [19] ;
unsigned long long int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)38197;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2430524163U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 9158007013713306623ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 8839552867664332096ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
