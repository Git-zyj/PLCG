#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned int var_1 = 1125308632U;
unsigned short var_3 = (unsigned short)8055;
short var_6 = (short)26553;
unsigned long long int var_12 = 8331739188392787821ULL;
signed char var_13 = (signed char)-102;
signed char var_14 = (signed char)-64;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)8;
int var_18 = -692211127;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)23;
unsigned long long int var_21 = 3672007697990280848ULL;
int var_22 = 472269296;
unsigned int arr_5 [11] ;
unsigned int arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 487131901U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2225217463U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
