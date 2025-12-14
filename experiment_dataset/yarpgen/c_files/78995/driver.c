#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3936698213166369781ULL;
long long int var_1 = 6111663513552907620LL;
unsigned int var_4 = 1244591146U;
long long int var_14 = 6674936693832777110LL;
int zero = 0;
unsigned int var_17 = 3995957037U;
long long int var_18 = -5618897200554051221LL;
unsigned int var_19 = 2196131790U;
long long int var_20 = 6499329807793616619LL;
unsigned int var_21 = 2696426969U;
short var_22 = (short)-29681;
long long int var_23 = -6017809722816483298LL;
signed char var_24 = (signed char)82;
signed char var_25 = (signed char)-88;
short var_26 = (short)-28714;
long long int var_27 = 3411794040202561459LL;
unsigned long long int arr_0 [22] ;
long long int arr_1 [22] ;
short arr_2 [14] ;
long long int arr_5 [14] ;
long long int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 497578153570629482ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -8450096416347023300LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-1897;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 8295668678964017977LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 4547927789084839321LL : -1857928029584122050LL;
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
