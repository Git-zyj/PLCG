#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)24479;
unsigned short var_4 = (unsigned short)37628;
signed char var_5 = (signed char)125;
unsigned short var_6 = (unsigned short)9328;
signed char var_7 = (signed char)32;
unsigned short var_8 = (unsigned short)62063;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)93;
unsigned long long int var_11 = 3048493267774091581ULL;
unsigned int var_12 = 1817529116U;
unsigned short var_13 = (unsigned short)63632;
unsigned long long int var_14 = 5703814888929774552ULL;
signed char var_15 = (signed char)-44;
short var_16 = (short)17432;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)22877;
signed char var_19 = (signed char)110;
short var_20 = (short)-16863;
short var_21 = (short)-21194;
unsigned short var_22 = (unsigned short)1441;
signed char var_23 = (signed char)-102;
unsigned short var_24 = (unsigned short)11782;
unsigned short var_25 = (unsigned short)55942;
unsigned short var_26 = (unsigned short)39049;
unsigned long long int var_27 = 17263125500773884457ULL;
unsigned long long int var_28 = 16602291105550176244ULL;
long long int var_29 = -3183053803153974894LL;
unsigned short arr_2 [11] ;
_Bool arr_3 [11] [11] ;
unsigned short arr_8 [14] ;
long long int arr_14 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9774 : (unsigned short)25709;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16965 : (unsigned short)64940;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 2642739410394094195LL : 2510070189564127565LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
