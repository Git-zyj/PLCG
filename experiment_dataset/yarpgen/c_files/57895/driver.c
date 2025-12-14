#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
long long int var_2 = 8225208963939853875LL;
long long int var_6 = 5357259772075220699LL;
unsigned short var_7 = (unsigned short)28330;
unsigned int var_8 = 1076360165U;
long long int var_9 = 3867122035401806630LL;
unsigned long long int var_10 = 12574015868189516587ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)143;
int zero = 0;
unsigned char var_15 = (unsigned char)21;
unsigned char var_16 = (unsigned char)216;
long long int var_17 = 3543376516510905616LL;
signed char var_18 = (signed char)-87;
unsigned long long int arr_0 [11] ;
unsigned char arr_1 [11] [11] ;
long long int arr_2 [11] ;
long long int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3963257512754847585ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 3495524399830994608LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -5309697602514869519LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
