#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1500343040122975133LL;
unsigned char var_1 = (unsigned char)16;
unsigned long long int var_5 = 5391580024235552425ULL;
unsigned char var_8 = (unsigned char)174;
unsigned long long int var_11 = 7204826788786488123ULL;
unsigned int var_12 = 1554347426U;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -831568205;
short var_17 = (short)-14458;
signed char var_18 = (signed char)48;
unsigned short var_19 = (unsigned short)23289;
unsigned char var_20 = (unsigned char)191;
unsigned int var_21 = 3456437645U;
unsigned short var_22 = (unsigned short)62135;
signed char arr_1 [22] ;
int arr_2 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1173124969;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
