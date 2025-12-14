#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61753;
long long int var_3 = 5975797774149710201LL;
unsigned int var_6 = 2453832670U;
unsigned short var_8 = (unsigned short)27859;
long long int var_9 = -6729956867610425727LL;
int var_12 = -502472550;
long long int var_16 = 1904198839407190004LL;
short var_17 = (short)5886;
int zero = 0;
unsigned long long int var_18 = 16762024329277560771ULL;
unsigned int var_19 = 771059173U;
long long int var_20 = -1643012187003513861LL;
long long int var_21 = -4013109644265076940LL;
long long int arr_2 [21] [21] ;
int arr_3 [21] [21] ;
unsigned long long int arr_7 [21] ;
int arr_8 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -1484014876736527901LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 1705810457;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 10630798063006492027ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1842010872;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
