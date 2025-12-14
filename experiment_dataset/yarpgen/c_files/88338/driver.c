#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7136277236475700642LL;
unsigned short var_1 = (unsigned short)5941;
unsigned int var_3 = 1717075667U;
unsigned short var_5 = (unsigned short)63773;
int var_8 = 84487070;
long long int var_9 = 1508167401314258450LL;
int var_11 = -1814447334;
int zero = 0;
unsigned long long int var_13 = 3010530195318634294ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)19276;
short var_16 = (short)-3488;
unsigned long long int var_17 = 5815329012857503938ULL;
unsigned char var_18 = (unsigned char)225;
int var_19 = -1154257501;
int var_20 = 1596498105;
int var_21 = 52230578;
unsigned int var_22 = 3678449185U;
unsigned int var_23 = 2953494086U;
signed char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned short arr_2 [24] ;
int arr_4 [24] ;
unsigned long long int arr_5 [24] ;
unsigned int arr_10 [12] [12] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 12870828075816469702ULL : 4933803452327629761ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4067 : (unsigned short)42701;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -846459399;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 11792014322091266195ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 2201030673U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 16926173630763311515ULL : 14300129060123344058ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
