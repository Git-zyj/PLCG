#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3160666814U;
signed char var_2 = (signed char)10;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)14;
unsigned long long int var_6 = 2374345899208622343ULL;
long long int var_7 = 7401280271861119377LL;
unsigned int var_8 = 3914894985U;
long long int var_11 = -3902730087642182331LL;
signed char var_13 = (signed char)24;
long long int var_14 = -3988912385510320646LL;
int var_15 = 94128240;
unsigned int var_18 = 1474710119U;
int zero = 0;
unsigned char var_20 = (unsigned char)53;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-83;
signed char var_25 = (signed char)-104;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)166;
unsigned char arr_0 [22] ;
short arr_1 [22] ;
signed char arr_2 [22] ;
long long int arr_3 [17] ;
unsigned int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-25143;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 42382050270653871LL : 1178937314439755177LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3572795166U : 3826173629U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
