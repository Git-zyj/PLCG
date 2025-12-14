#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18294460736168886494ULL;
unsigned long long int var_1 = 7746440918276755673ULL;
signed char var_2 = (signed char)106;
int var_3 = -504066323;
unsigned char var_4 = (unsigned char)171;
short var_5 = (short)27462;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 4514857825771670913ULL;
unsigned long long int var_13 = 2743058979954987463ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)11628;
long long int var_15 = 5434012544623871253LL;
long long int var_16 = -9062110941120453903LL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-27;
unsigned char arr_1 [12] ;
long long int arr_2 [12] ;
signed char arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1246969343329376558LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-93;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
