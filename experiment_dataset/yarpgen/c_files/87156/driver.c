#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1618592663269717935LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)47075;
long long int var_6 = -8928063246807363504LL;
_Bool var_7 = (_Bool)0;
short var_9 = (short)10180;
long long int var_11 = -877465306900598383LL;
int var_12 = 864812619;
unsigned short var_14 = (unsigned short)37891;
long long int var_15 = -1086085749874257296LL;
int zero = 0;
unsigned char var_16 = (unsigned char)75;
short var_17 = (short)4566;
short var_18 = (short)18440;
unsigned char var_19 = (unsigned char)27;
unsigned short var_20 = (unsigned short)49853;
unsigned short var_21 = (unsigned short)11119;
unsigned long long int arr_2 [10] ;
long long int arr_4 [10] [10] [10] ;
long long int arr_7 [10] ;
unsigned int arr_9 [10] [10] [10] ;
long long int arr_10 [10] ;
long long int arr_11 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4715182802639323486ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -4157994802069355743LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 285438443912968881LL : 2135182663192642066LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3307839237U : 2541880880U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -6004215433342175370LL : -1784178398231155472LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 4861135027043641644LL : 9181350634742280330LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
