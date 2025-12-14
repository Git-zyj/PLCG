#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29288;
unsigned char var_2 = (unsigned char)109;
long long int var_3 = -5461238761494628582LL;
short var_4 = (short)18711;
unsigned char var_6 = (unsigned char)40;
long long int var_7 = -4933389278283975090LL;
signed char var_11 = (signed char)74;
_Bool var_12 = (_Bool)1;
long long int var_14 = 2255818111035095320LL;
signed char var_15 = (signed char)17;
_Bool var_17 = (_Bool)0;
int var_18 = 515265809;
int zero = 0;
unsigned char var_19 = (unsigned char)15;
signed char var_20 = (signed char)-119;
unsigned char var_21 = (unsigned char)12;
long long int var_22 = -3881966362315562840LL;
unsigned short var_23 = (unsigned short)15002;
unsigned short var_24 = (unsigned short)19938;
signed char var_25 = (signed char)38;
long long int var_26 = -6078815263885591835LL;
unsigned short var_27 = (unsigned short)17452;
long long int arr_14 [25] [25] [25] [25] [25] ;
long long int arr_16 [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -241883599275148397LL : -4819128038880644485LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1627546063117419505LL;
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
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
