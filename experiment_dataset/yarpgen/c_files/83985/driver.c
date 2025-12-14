#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7966816618169575089LL;
short var_3 = (short)13816;
_Bool var_4 = (_Bool)1;
int var_6 = -1814666838;
unsigned long long int var_7 = 170272637448623981ULL;
unsigned char var_8 = (unsigned char)150;
short var_9 = (short)16840;
unsigned char var_11 = (unsigned char)34;
long long int var_12 = 2340073553562018520LL;
long long int var_13 = -320580254171465385LL;
signed char var_14 = (signed char)38;
int zero = 0;
unsigned short var_16 = (unsigned short)65059;
unsigned int var_17 = 2300324096U;
short var_18 = (short)-9569;
unsigned char var_19 = (unsigned char)163;
long long int var_20 = 386885678547771827LL;
unsigned long long int var_21 = 16297931535318385398ULL;
unsigned char arr_4 [14] ;
unsigned int arr_5 [14] ;
long long int arr_8 [12] ;
unsigned char arr_11 [15] ;
unsigned int arr_14 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 2664163223U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -9143772386480091532LL : 4478281676939333965LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 3617737575U : 3057439503U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
