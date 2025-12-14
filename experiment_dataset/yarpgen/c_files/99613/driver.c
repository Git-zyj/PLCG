#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12909;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 986959376805355845ULL;
long long int var_9 = -6318454019105275772LL;
unsigned long long int var_12 = 4665524076130289788ULL;
unsigned short var_14 = (unsigned short)15648;
unsigned char var_15 = (unsigned char)151;
long long int var_19 = -1819050993346388984LL;
int zero = 0;
unsigned long long int var_20 = 129631039949877563ULL;
unsigned int var_21 = 301479109U;
int var_22 = -1106825402;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)217;
unsigned char var_25 = (unsigned char)64;
int arr_0 [22] ;
unsigned char arr_2 [22] ;
unsigned long long int arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1888049513;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 482647697556364650ULL : 18304604401796107348ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
