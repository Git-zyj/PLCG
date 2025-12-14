#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16992;
unsigned char var_4 = (unsigned char)69;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 17321789284661193781ULL;
unsigned long long int var_13 = 14931098280501021181ULL;
long long int var_15 = 1539319695113617740LL;
signed char var_17 = (signed char)-88;
long long int var_19 = 4483710754125534713LL;
int zero = 0;
unsigned char var_20 = (unsigned char)146;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-68;
int var_23 = 594474738;
signed char var_24 = (signed char)(-127 - 1);
_Bool var_25 = (_Bool)1;
unsigned short arr_1 [18] [18] ;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_4 [23] ;
short arr_5 [23] ;
unsigned char arr_6 [23] ;
unsigned short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)15445;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 9391283297269496636ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 18429800843844438723ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)14046;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)3791;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
