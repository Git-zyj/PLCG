#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
int var_1 = -549924873;
int var_5 = -1845528065;
unsigned char var_8 = (unsigned char)192;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)57444;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)46832;
int zero = 0;
long long int var_15 = 8558594203654012496LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1738285025990292303ULL;
unsigned long long int arr_1 [25] ;
long long int arr_4 [25] [25] [25] ;
unsigned short arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8483945242911600134ULL : 12571079261910513876ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2603744252467046697LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)30459 : (unsigned short)4406;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
