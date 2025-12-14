#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2701201015U;
int var_4 = 977274930;
unsigned short var_6 = (unsigned short)55008;
int var_7 = 866306678;
int var_8 = -1559188845;
long long int var_9 = 1559782026532709187LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 13355584576623159427ULL;
long long int var_14 = -1107921486660705623LL;
unsigned short var_16 = (unsigned short)35165;
long long int var_17 = 1902482903348410945LL;
int zero = 0;
unsigned short var_19 = (unsigned short)41557;
unsigned char var_20 = (unsigned char)162;
unsigned char var_21 = (unsigned char)151;
unsigned long long int var_22 = 5490414954435930861ULL;
unsigned short var_23 = (unsigned short)57311;
int var_24 = -1258655001;
int var_25 = -2013374929;
unsigned short var_26 = (unsigned short)26232;
unsigned char arr_0 [25] [25] ;
int arr_3 [25] ;
unsigned int arr_4 [25] ;
unsigned char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -1063719660;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1429493517U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)197 : (unsigned char)19;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
