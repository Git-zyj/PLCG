#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-232;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)62893;
unsigned char var_6 = (unsigned char)15;
unsigned short var_11 = (unsigned short)44294;
unsigned int var_12 = 3807084268U;
unsigned int var_13 = 3722568064U;
unsigned int var_14 = 2466374972U;
unsigned short var_15 = (unsigned short)39981;
unsigned int var_16 = 659303946U;
unsigned char var_17 = (unsigned char)214;
short var_19 = (short)3273;
int zero = 0;
unsigned int var_20 = 3738665413U;
unsigned short var_21 = (unsigned short)61103;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-21199;
unsigned int var_24 = 2415353682U;
unsigned short var_25 = (unsigned short)42895;
unsigned char var_26 = (unsigned char)145;
unsigned int var_27 = 3589887911U;
unsigned int var_28 = 416555689U;
unsigned int var_29 = 653480559U;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1729132410U;
unsigned int var_32 = 3524048435U;
_Bool var_33 = (_Bool)1;
short var_34 = (short)-23667;
unsigned int var_35 = 1865113749U;
unsigned short var_36 = (unsigned short)16833;
_Bool var_37 = (_Bool)0;
short var_38 = (short)-14990;
unsigned char var_39 = (unsigned char)193;
unsigned int var_40 = 2728679600U;
_Bool var_41 = (_Bool)1;
unsigned int var_42 = 337951230U;
unsigned int arr_0 [23] ;
short arr_1 [23] ;
unsigned int arr_3 [23] ;
unsigned char arr_30 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1091071692U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-9479;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2670489700U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned char)211;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
