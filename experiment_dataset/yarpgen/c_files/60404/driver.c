#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24458;
unsigned long long int var_2 = 13475666231277708821ULL;
unsigned char var_3 = (unsigned char)51;
int var_4 = -133059250;
unsigned short var_9 = (unsigned short)45984;
unsigned short var_10 = (unsigned short)26528;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)168;
unsigned char var_14 = (unsigned char)210;
signed char var_15 = (signed char)82;
unsigned char var_16 = (unsigned char)176;
unsigned short var_17 = (unsigned short)52775;
int var_18 = -1919165676;
_Bool var_19 = (_Bool)0;
_Bool arr_0 [11] ;
unsigned char arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)118;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
