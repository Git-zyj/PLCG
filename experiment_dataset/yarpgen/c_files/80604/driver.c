#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7741978942594814908ULL;
unsigned char var_3 = (unsigned char)225;
unsigned char var_5 = (unsigned char)217;
unsigned char var_7 = (unsigned char)175;
long long int var_12 = -6319691517297758932LL;
int zero = 0;
short var_15 = (short)6921;
unsigned char var_16 = (unsigned char)9;
signed char var_17 = (signed char)41;
unsigned char var_18 = (unsigned char)97;
unsigned char var_19 = (unsigned char)143;
int var_20 = -759428848;
long long int var_21 = 8097806326151772144LL;
long long int arr_2 [18] [18] ;
unsigned char arr_3 [18] [18] [18] ;
int arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -1603264524685444957LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = -1598369881;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
