#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4273037180041085041LL;
unsigned int var_1 = 2019448323U;
short var_3 = (short)31859;
unsigned int var_4 = 3008389012U;
int var_6 = -1367321258;
int var_7 = -1732560993;
unsigned char var_8 = (unsigned char)64;
long long int var_9 = 7817981910874580069LL;
unsigned long long int var_12 = 10335819569131389517ULL;
unsigned short var_13 = (unsigned short)56885;
short var_14 = (short)-8452;
int zero = 0;
short var_15 = (short)-29240;
long long int var_16 = 2218096741429383230LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)44;
short var_19 = (short)-21078;
_Bool var_20 = (_Bool)0;
int var_21 = 313874680;
int var_22 = -1825221066;
signed char arr_0 [21] ;
signed char arr_1 [21] ;
unsigned long long int arr_2 [21] ;
unsigned long long int arr_4 [21] ;
signed char arr_5 [21] [21] ;
_Bool arr_7 [21] ;
unsigned int arr_13 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 795648314960726130ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2433557898741456791ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 125952404U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
