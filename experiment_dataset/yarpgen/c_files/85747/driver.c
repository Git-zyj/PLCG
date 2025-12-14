#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned short var_4 = (unsigned short)32845;
long long int var_7 = -3916455479387428280LL;
unsigned char var_8 = (unsigned char)198;
unsigned long long int var_9 = 7288310686263537073ULL;
short var_11 = (short)-24053;
_Bool var_12 = (_Bool)0;
long long int var_14 = -8351420258076341381LL;
int zero = 0;
unsigned int var_15 = 1423511833U;
unsigned long long int var_16 = 10661444813846134702ULL;
unsigned long long int var_17 = 6006454282467421387ULL;
unsigned int var_18 = 2690211370U;
unsigned long long int var_19 = 14954439685743838614ULL;
int var_20 = 1241804763;
unsigned char arr_0 [11] [11] ;
unsigned char arr_2 [11] ;
unsigned char arr_4 [11] [11] ;
int arr_5 [11] [11] [11] ;
int arr_6 [11] ;
unsigned long long int arr_8 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -749637441;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1609434496 : -567770885;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 17377586880087768400ULL : 15780428864185800919ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
