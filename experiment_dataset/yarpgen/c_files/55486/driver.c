#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1572068626833215877LL;
short var_12 = (short)-3073;
signed char var_15 = (signed char)70;
long long int var_17 = -5687013756269092561LL;
int zero = 0;
unsigned int var_18 = 164153587U;
long long int var_19 = -2099442676295636578LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -6713519214082934307LL;
signed char var_22 = (signed char)78;
signed char var_23 = (signed char)-37;
unsigned long long int var_24 = 16320146895159324789ULL;
unsigned long long int var_25 = 11686756327691410804ULL;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 3060993914U;
signed char var_28 = (signed char)-35;
short var_29 = (short)-24537;
unsigned int var_30 = 1491982254U;
unsigned long long int var_31 = 2957986391084470499ULL;
unsigned int var_32 = 4189511250U;
signed char var_33 = (signed char)-24;
_Bool var_34 = (_Bool)0;
long long int var_35 = -2101647745365576801LL;
long long int arr_0 [12] [12] ;
signed char arr_1 [12] ;
_Bool arr_2 [14] ;
unsigned int arr_3 [14] ;
long long int arr_4 [14] ;
unsigned int arr_5 [14] [14] ;
long long int arr_6 [17] ;
long long int arr_7 [17] ;
long long int arr_8 [17] ;
unsigned long long int arr_9 [24] ;
_Bool arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 5492102353541805955LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 881633206U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -7206964274992057123LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 2246952981U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -5784812571711628387LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 4917511803704872209LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -429992878456591830LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 9716522313553589108ULL : 5046762398027045096ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
