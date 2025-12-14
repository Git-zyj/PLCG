#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 415998195;
unsigned long long int var_5 = 5375429575715024134ULL;
unsigned int var_7 = 4049783591U;
short var_10 = (short)-25124;
unsigned short var_12 = (unsigned short)4683;
unsigned char var_13 = (unsigned char)0;
int zero = 0;
unsigned int var_18 = 2943460317U;
unsigned long long int var_19 = 17958145902170760398ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 127896172U;
short arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-10279;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
