#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33359;
short var_1 = (short)10844;
unsigned char var_2 = (unsigned char)157;
short var_3 = (short)11889;
short var_4 = (short)29816;
long long int var_5 = 7220018124828667537LL;
unsigned char var_6 = (unsigned char)156;
short var_7 = (short)-17218;
unsigned char var_8 = (unsigned char)180;
unsigned long long int var_9 = 6406199824736451557ULL;
signed char var_10 = (signed char)22;
int zero = 0;
unsigned char var_11 = (unsigned char)246;
unsigned char var_12 = (unsigned char)160;
unsigned int var_13 = 2647798657U;
unsigned short var_14 = (unsigned short)49294;
unsigned char var_15 = (unsigned char)121;
unsigned long long int var_16 = 12824784921913839696ULL;
signed char var_17 = (signed char)-34;
short var_18 = (short)-29937;
unsigned char var_19 = (unsigned char)15;
int var_20 = 612735139;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
int var_23 = -182584467;
unsigned long long int arr_0 [23] ;
long long int arr_5 [12] [12] ;
unsigned int arr_3 [23] ;
int arr_6 [12] ;
short arr_9 [12] [12] [12] ;
long long int arr_10 [12] [12] ;
unsigned int arr_17 [12] [12] ;
_Bool arr_20 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 722091368211650528ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 7833108896711330611LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3115417667U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 1073601006;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)5151 : (short)-10401;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 4991784795041440695LL : -9129179961252804406LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 2028089678U : 3739829326U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
