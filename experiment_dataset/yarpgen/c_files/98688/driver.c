#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1437779606;
short var_2 = (short)-30075;
long long int var_3 = -50721994309095287LL;
int var_9 = -2086811263;
unsigned short var_11 = (unsigned short)57786;
int zero = 0;
long long int var_14 = -575411456449715803LL;
long long int var_15 = 268824192753386137LL;
short var_16 = (short)-20735;
short var_17 = (short)5213;
unsigned long long int var_18 = 4662784748103276097ULL;
unsigned short var_19 = (unsigned short)19192;
int var_20 = 1150768401;
long long int var_21 = -3767414135160056622LL;
int arr_0 [19] ;
long long int arr_1 [19] ;
int arr_2 [19] ;
unsigned short arr_5 [24] ;
short arr_6 [24] ;
long long int arr_3 [19] ;
unsigned long long int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 173080146;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 5571638809437303948LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1884874297;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)37087;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)26653 : (short)26180;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 3631001939672271932LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 14998411622822796657ULL : 4252506360959955565ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
