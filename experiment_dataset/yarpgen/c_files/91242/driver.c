#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7550112158209278214LL;
int var_2 = -359983661;
long long int var_3 = 7222127096126150716LL;
long long int var_4 = -3931772168144794486LL;
unsigned long long int var_5 = 8389842482233785174ULL;
signed char var_6 = (signed char)-104;
unsigned long long int var_7 = 5710096770475453159ULL;
unsigned int var_8 = 1613291876U;
unsigned char var_9 = (unsigned char)33;
unsigned long long int var_10 = 4914601390518612786ULL;
long long int var_11 = 6198436305157784712LL;
unsigned long long int var_12 = 10908377677291082283ULL;
signed char var_13 = (signed char)103;
long long int var_14 = 4475418358367786079LL;
unsigned short var_15 = (unsigned short)20818;
unsigned char var_16 = (unsigned char)31;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5984598670169913531LL;
unsigned short var_19 = (unsigned short)55291;
int var_20 = -2019226931;
unsigned char var_21 = (unsigned char)218;
signed char var_22 = (signed char)-91;
unsigned int var_23 = 3276522409U;
unsigned int var_24 = 1232141713U;
int var_25 = -119027212;
long long int arr_2 [11] [11] ;
long long int arr_9 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -76337648042660265LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 5651749466563803494LL : -7773073923331069944LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
