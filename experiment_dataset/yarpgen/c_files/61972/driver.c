#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3963321822655221903LL;
int var_1 = -180968754;
unsigned char var_3 = (unsigned char)253;
unsigned int var_5 = 1510129698U;
unsigned char var_6 = (unsigned char)223;
signed char var_7 = (signed char)-80;
short var_8 = (short)9791;
long long int var_11 = -3372305332953205640LL;
unsigned short var_12 = (unsigned short)38055;
int zero = 0;
unsigned short var_13 = (unsigned short)52761;
int var_14 = 22933470;
long long int var_15 = 5961361618720998028LL;
_Bool var_16 = (_Bool)0;
long long int arr_0 [23] ;
int arr_1 [23] ;
int arr_3 [23] [23] ;
long long int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7651415232662525456LL : 6780372191201045999LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1646926562;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1197052981 : -508608110;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -5134040339087968425LL : -5287694542443866290LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
