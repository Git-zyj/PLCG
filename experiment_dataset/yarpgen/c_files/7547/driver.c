#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6452742074239019119LL;
unsigned short var_3 = (unsigned short)41098;
short var_4 = (short)24652;
signed char var_6 = (signed char)-38;
unsigned short var_9 = (unsigned short)38456;
signed char var_10 = (signed char)15;
long long int var_11 = -8766767039333089826LL;
_Bool var_12 = (_Bool)0;
unsigned char var_18 = (unsigned char)233;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
long long int var_23 = -1380260496643015705LL;
signed char var_24 = (signed char)96;
_Bool arr_0 [11] ;
short arr_1 [11] [11] ;
int arr_2 [11] [11] ;
short arr_5 [11] ;
long long int arr_6 [11] ;
_Bool arr_3 [11] ;
unsigned short arr_4 [11] ;
_Bool arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)3211;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1183924208;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)-10717;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 9029502011894662677LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)37774;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
