#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2053540928;
unsigned char var_2 = (unsigned char)35;
long long int var_4 = -1269115624893429422LL;
signed char var_5 = (signed char)1;
signed char var_13 = (signed char)100;
short var_14 = (short)-15245;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2528829168U;
signed char var_22 = (signed char)-72;
unsigned long long int var_23 = 816439146537935564ULL;
unsigned char var_24 = (unsigned char)68;
unsigned short var_25 = (unsigned short)42734;
unsigned long long int var_26 = 15128907355706000988ULL;
unsigned short arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
signed char arr_2 [14] [14] ;
unsigned char arr_3 [14] [14] [14] ;
signed char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)50756;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 6258235763562924820ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)98;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
