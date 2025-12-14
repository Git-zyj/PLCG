#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2998916161U;
unsigned short var_1 = (unsigned short)17698;
unsigned long long int var_3 = 13869921679366723374ULL;
unsigned long long int var_6 = 782918548448310065ULL;
unsigned char var_8 = (unsigned char)136;
unsigned long long int var_9 = 1640533457047128974ULL;
unsigned char var_10 = (unsigned char)147;
int zero = 0;
unsigned long long int var_11 = 4777619217668459894ULL;
int var_12 = -707458528;
int var_13 = -1530122161;
signed char var_14 = (signed char)-110;
unsigned int var_15 = 1355990000U;
unsigned short var_16 = (unsigned short)52724;
unsigned int var_17 = 3816744120U;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)190;
unsigned int var_20 = 1927263588U;
unsigned short arr_0 [15] [15] ;
unsigned short arr_2 [22] ;
unsigned char arr_3 [22] ;
unsigned long long int arr_4 [22] [22] [22] ;
unsigned long long int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)15596;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)12946;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 14828013655704247130ULL : 16755233721321093497ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 10834722613583933328ULL : 7321926546965101880ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
