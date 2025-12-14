#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3084532126U;
unsigned char var_1 = (unsigned char)57;
unsigned int var_5 = 287433973U;
int var_6 = 272685025;
signed char var_8 = (signed char)-87;
unsigned long long int var_11 = 2171247182652791974ULL;
unsigned short var_12 = (unsigned short)20582;
unsigned long long int var_14 = 6726674053314379126ULL;
int zero = 0;
int var_15 = -1818817167;
int var_16 = -1435366539;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)20345;
unsigned char var_20 = (unsigned char)102;
int var_21 = -367545988;
unsigned long long int var_22 = 10067518554286298367ULL;
unsigned int var_23 = 1461148443U;
unsigned long long int var_24 = 41289425151993440ULL;
int var_25 = 1202071174;
signed char arr_0 [24] [24] ;
int arr_1 [24] ;
unsigned long long int arr_3 [24] ;
signed char arr_5 [24] ;
signed char arr_7 [24] [24] ;
short arr_12 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -799279100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 12681782662899992396ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)-6297;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
