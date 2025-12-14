#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-119;
short var_2 = (short)22901;
long long int var_9 = -1515460508950986325LL;
signed char var_11 = (signed char)84;
int zero = 0;
short var_12 = (short)17779;
unsigned short var_13 = (unsigned short)54662;
unsigned char var_14 = (unsigned char)194;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)80;
long long int arr_1 [14] ;
short arr_2 [14] ;
signed char arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -2088667809467715514LL : -8597366166749611815LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-21592;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-109 : (signed char)71;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
