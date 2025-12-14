#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3399083068344561386LL;
signed char var_2 = (signed char)-19;
unsigned short var_4 = (unsigned short)34119;
signed char var_6 = (signed char)-114;
long long int var_7 = -8576875005591747589LL;
unsigned int var_8 = 3752493383U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)42;
unsigned long long int var_18 = 775943269921287484ULL;
unsigned int var_19 = 74168717U;
int zero = 0;
unsigned char var_20 = (unsigned char)77;
unsigned int var_21 = 3457405354U;
signed char var_22 = (signed char)54;
int arr_0 [10] ;
unsigned char arr_1 [10] ;
unsigned int arr_2 [10] ;
unsigned long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1453057355;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)110 : (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1250878115U : 3683415293U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 11283985887582684102ULL : 9551680471209973399ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
