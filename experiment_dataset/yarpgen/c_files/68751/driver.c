#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1933672699698318512LL;
long long int var_1 = 2686386964145220683LL;
long long int var_2 = 2275310019970464136LL;
signed char var_3 = (signed char)-101;
signed char var_4 = (signed char)46;
unsigned char var_6 = (unsigned char)161;
int var_7 = 176358944;
unsigned long long int var_9 = 509177397559096742ULL;
unsigned short var_10 = (unsigned short)51596;
unsigned long long int var_11 = 8797641529917193647ULL;
long long int var_12 = 4793243304905472822LL;
long long int var_15 = 2668661624742035607LL;
long long int var_16 = 937321988209947901LL;
int zero = 0;
long long int var_17 = -3947269297696585389LL;
int var_18 = -1102090930;
unsigned long long int var_19 = 6457196336364254920ULL;
long long int var_20 = -2533218639839165068LL;
short var_21 = (short)-31470;
signed char var_22 = (signed char)-110;
unsigned long long int var_23 = 10540586962995848933ULL;
unsigned long long int var_24 = 5347398993474870308ULL;
long long int var_25 = -3815082122338791906LL;
unsigned char var_26 = (unsigned char)146;
_Bool var_27 = (_Bool)1;
unsigned long long int arr_0 [21] ;
long long int arr_1 [21] ;
signed char arr_2 [12] [12] ;
long long int arr_4 [18] [18] ;
unsigned short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 7369847324172694951ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 5398402677451483678LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -6137346412181785311LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)33241;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
