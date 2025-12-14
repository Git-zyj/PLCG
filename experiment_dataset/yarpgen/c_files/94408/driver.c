#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 686791807U;
int var_2 = -1047808284;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_9 = -8886693351699292826LL;
long long int var_11 = -633798179752875940LL;
int var_16 = -321320320;
unsigned short var_17 = (unsigned short)23018;
int zero = 0;
short var_20 = (short)4997;
long long int var_21 = -5801245987094391068LL;
int var_22 = 1668876998;
unsigned char var_23 = (unsigned char)21;
long long int var_24 = 849312662964014042LL;
unsigned char arr_3 [19] [19] ;
signed char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)19;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
