#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21864;
unsigned int var_2 = 99967653U;
long long int var_3 = -6832950671095992343LL;
signed char var_4 = (signed char)-103;
signed char var_8 = (signed char)-123;
long long int var_10 = 5656544492236848175LL;
unsigned char var_11 = (unsigned char)217;
short var_13 = (short)-9939;
short var_15 = (short)7320;
int zero = 0;
unsigned short var_16 = (unsigned short)27887;
int var_17 = 1821993539;
unsigned short var_18 = (unsigned short)39801;
unsigned short var_19 = (unsigned short)25590;
long long int var_20 = -8410288701007153376LL;
unsigned int arr_2 [11] [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 3825399433U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
