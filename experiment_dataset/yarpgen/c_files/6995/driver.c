#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12970;
signed char var_2 = (signed char)85;
unsigned short var_3 = (unsigned short)56081;
unsigned char var_4 = (unsigned char)212;
unsigned char var_5 = (unsigned char)208;
long long int var_6 = 8754930271075898172LL;
unsigned char var_7 = (unsigned char)137;
long long int var_8 = -7389041123902459883LL;
signed char var_9 = (signed char)-37;
unsigned long long int var_11 = 9173295725031634488ULL;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)-45;
int zero = 0;
unsigned int var_15 = 3547296029U;
unsigned char var_16 = (unsigned char)164;
unsigned int var_17 = 379539192U;
unsigned short var_18 = (unsigned short)60807;
short var_19 = (short)-8871;
long long int var_20 = -6441731990238379797LL;
int var_21 = 1986085857;
unsigned long long int arr_0 [20] ;
long long int arr_1 [20] [20] ;
unsigned int arr_2 [20] [20] ;
unsigned short arr_3 [20] ;
short arr_7 [10] [10] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 10396000997487148672ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1524754304637376497LL : 7434856082103969242LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 3966013154U : 1295360446U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)52184;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-23093;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1635229737 : 995626209;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
