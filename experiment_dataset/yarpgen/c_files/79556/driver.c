#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1212187595054166479ULL;
signed char var_2 = (signed char)-37;
unsigned char var_3 = (unsigned char)20;
short var_6 = (short)-20498;
long long int var_7 = 6568921083906847770LL;
short var_9 = (short)-1656;
long long int var_10 = -7600257257528356098LL;
long long int var_11 = 911678939052972158LL;
unsigned int var_13 = 854258199U;
short var_14 = (short)12572;
int var_18 = 617535589;
int zero = 0;
signed char var_20 = (signed char)7;
unsigned int var_21 = 4153640145U;
long long int var_22 = -5143601831918304486LL;
signed char var_23 = (signed char)5;
short arr_0 [20] [20] ;
unsigned char arr_2 [20] ;
unsigned int arr_5 [20] ;
unsigned short arr_3 [20] ;
long long int arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-28280;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 2063545748U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)42392;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 2589515333354456551LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
