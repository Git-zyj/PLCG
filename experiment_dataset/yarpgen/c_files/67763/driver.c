#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12955;
int var_1 = -1791665076;
unsigned long long int var_3 = 17562859530354031439ULL;
unsigned short var_7 = (unsigned short)58639;
unsigned short var_9 = (unsigned short)58450;
unsigned long long int var_10 = 8246618477599096585ULL;
short var_13 = (short)19404;
int var_14 = -1029401044;
int zero = 0;
unsigned short var_16 = (unsigned short)57723;
int var_17 = 1216991309;
short var_18 = (short)17723;
unsigned long long int var_19 = 3840717919559557987ULL;
_Bool var_20 = (_Bool)0;
unsigned char arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)181;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
