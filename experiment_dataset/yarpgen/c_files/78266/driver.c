#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-55;
int var_5 = -703780086;
unsigned short var_7 = (unsigned short)50747;
short var_9 = (short)-13550;
unsigned int var_11 = 1125860990U;
unsigned short var_12 = (unsigned short)22143;
int var_14 = 1132371788;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-10199;
_Bool var_18 = (_Bool)0;
short var_19 = (short)8160;
unsigned int var_20 = 948181062U;
unsigned char arr_0 [11] ;
signed char arr_4 [11] ;
unsigned long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)11 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 12731231005975367423ULL : 775537439133090780ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
