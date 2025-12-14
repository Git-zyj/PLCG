#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)254;
unsigned long long int var_3 = 9240769883933509034ULL;
unsigned short var_4 = (unsigned short)28580;
unsigned int var_8 = 3640760704U;
unsigned int var_14 = 830247766U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)60230;
int zero = 0;
signed char var_17 = (signed char)-43;
unsigned char var_18 = (unsigned char)41;
unsigned char var_19 = (unsigned char)35;
unsigned long long int var_20 = 15248184730395792527ULL;
unsigned int var_21 = 1085633840U;
unsigned char var_22 = (unsigned char)125;
signed char var_23 = (signed char)76;
_Bool var_24 = (_Bool)0;
short var_25 = (short)-543;
unsigned char var_26 = (unsigned char)39;
unsigned char var_27 = (unsigned char)26;
unsigned short arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
unsigned char arr_4 [22] ;
long long int arr_5 [22] [22] ;
long long int arr_8 [14] ;
unsigned int arr_9 [14] [14] ;
unsigned long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)50310;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1454565640865983596LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -2690280493567106610LL : -8836587957873839092LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 3143194830U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 11698528304068631105ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
