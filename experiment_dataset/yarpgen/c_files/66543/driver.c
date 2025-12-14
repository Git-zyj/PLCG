#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4292786066U;
int var_1 = 585280985;
signed char var_2 = (signed char)13;
long long int var_3 = 9111185942713080509LL;
long long int var_5 = -8267123726050527453LL;
long long int var_8 = 2139447641974391750LL;
signed char var_10 = (signed char)49;
long long int var_12 = -7496446873452030291LL;
int zero = 0;
signed char var_18 = (signed char)104;
unsigned long long int var_19 = 18025553020341222506ULL;
unsigned int var_20 = 4247367755U;
signed char var_21 = (signed char)-19;
unsigned long long int arr_0 [15] ;
signed char arr_1 [15] ;
signed char arr_2 [15] ;
long long int arr_4 [15] [15] ;
signed char arr_11 [15] [15] [15] [15] ;
short arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 12134603802066916975ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -4991072134163362602LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-116 : (signed char)-109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)17821 : (short)-5626;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
