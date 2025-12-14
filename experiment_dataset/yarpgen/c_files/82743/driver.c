#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)81;
long long int var_4 = -7393309980647767804LL;
unsigned long long int var_7 = 5699988756498660124ULL;
unsigned char var_13 = (unsigned char)252;
unsigned short var_14 = (unsigned short)26818;
short var_15 = (short)10329;
long long int var_16 = 6195195517770324568LL;
long long int var_18 = 615871703529141361LL;
unsigned short var_19 = (unsigned short)4384;
int zero = 0;
short var_20 = (short)16899;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-33;
long long int var_24 = -5339282900810093924LL;
unsigned char arr_0 [12] ;
unsigned int arr_2 [12] [12] ;
unsigned long long int arr_3 [12] ;
unsigned char arr_4 [12] [12] [12] ;
unsigned short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 4105882457U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 5170483450666083078ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)16872;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
