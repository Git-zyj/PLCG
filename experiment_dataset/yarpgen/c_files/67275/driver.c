#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55207;
unsigned int var_2 = 1139221848U;
unsigned short var_3 = (unsigned short)32337;
int var_4 = -1651748975;
unsigned int var_5 = 3423754183U;
int var_6 = -2001559202;
unsigned long long int var_7 = 5512313807889435417ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1197809481U;
int zero = 0;
unsigned short var_10 = (unsigned short)18039;
unsigned short var_11 = (unsigned short)65366;
unsigned int var_12 = 2987103952U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 471016139U;
unsigned char var_15 = (unsigned char)185;
long long int var_16 = 4784855531705337919LL;
unsigned short var_17 = (unsigned short)20292;
_Bool var_18 = (_Bool)1;
unsigned long long int arr_2 [18] ;
signed char arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7274912914105617148ULL : 5593969993903127172ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)27;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
