#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6094813389881855920LL;
unsigned short var_3 = (unsigned short)57143;
unsigned char var_5 = (unsigned char)145;
signed char var_8 = (signed char)36;
int var_10 = -1700037516;
_Bool var_11 = (_Bool)1;
int var_14 = -519758779;
int zero = 0;
unsigned short var_15 = (unsigned short)44485;
int var_16 = -581916461;
unsigned short var_17 = (unsigned short)40033;
unsigned short var_18 = (unsigned short)48400;
unsigned short var_19 = (unsigned short)36838;
unsigned char var_20 = (unsigned char)147;
unsigned int arr_0 [19] ;
int arr_1 [19] ;
long long int arr_5 [20] [20] ;
int arr_2 [19] [19] ;
signed char arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1555528797U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -1167667323;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 5013774405145544600LL : 4943605988090081192LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -1666999547 : -1878629976;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-28 : (signed char)-5;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
