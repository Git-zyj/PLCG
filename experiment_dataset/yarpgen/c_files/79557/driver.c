#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)253;
unsigned char var_6 = (unsigned char)118;
int var_7 = 1347373485;
unsigned int var_8 = 1671280912U;
long long int var_9 = 1518182709348338805LL;
int zero = 0;
int var_10 = 672272134;
unsigned long long int var_11 = 13588683200305011683ULL;
unsigned long long int var_12 = 7483532779606453972ULL;
signed char var_13 = (signed char)-110;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7004323696862628494ULL;
unsigned char arr_0 [24] ;
unsigned int arr_2 [24] ;
unsigned short arr_6 [24] [24] [24] [24] ;
unsigned char arr_7 [24] [24] [24] ;
unsigned long long int arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1739266908U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)3217 : (unsigned short)57396;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)39 : (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 15636435808546510190ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
