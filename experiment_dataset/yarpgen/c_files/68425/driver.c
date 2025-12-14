#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
long long int var_5 = -8101900392537902350LL;
unsigned long long int var_6 = 18037509739248152667ULL;
int var_7 = 1976074267;
_Bool var_8 = (_Bool)1;
short var_9 = (short)7416;
int zero = 0;
unsigned char var_10 = (unsigned char)170;
unsigned long long int var_11 = 12475428984498529740ULL;
unsigned short var_12 = (unsigned short)60260;
unsigned long long int var_13 = 4983856066723052398ULL;
signed char var_14 = (signed char)-57;
short arr_1 [12] ;
_Bool arr_4 [12] [12] ;
_Bool arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-21766;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
