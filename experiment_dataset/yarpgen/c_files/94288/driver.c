#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6307195442703821363LL;
unsigned int var_1 = 3193345121U;
unsigned long long int var_2 = 3726996265634769968ULL;
unsigned char var_3 = (unsigned char)70;
unsigned int var_4 = 2960548844U;
unsigned char var_5 = (unsigned char)152;
int var_7 = 160130728;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)253;
int zero = 0;
long long int var_10 = 1857543759204614763LL;
unsigned char var_11 = (unsigned char)23;
int var_12 = 1584887407;
unsigned int var_13 = 839412093U;
unsigned int var_14 = 4074413693U;
unsigned int var_15 = 3378033535U;
unsigned char var_16 = (unsigned char)148;
unsigned char var_17 = (unsigned char)47;
int var_18 = -786875827;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5279839111701336419ULL;
unsigned long long int var_21 = 7369254894317531576ULL;
unsigned int var_22 = 3861876635U;
unsigned char arr_4 [13] ;
unsigned char arr_5 [13] [13] ;
unsigned int arr_13 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 3240192425U : 2206074035U;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
