#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10948567099491016627ULL;
unsigned int var_2 = 2733139130U;
unsigned char var_4 = (unsigned char)87;
unsigned short var_10 = (unsigned short)43240;
unsigned char var_11 = (unsigned char)132;
unsigned short var_12 = (unsigned short)61302;
short var_13 = (short)-13107;
unsigned long long int var_14 = 17075725483166842289ULL;
long long int var_15 = 4342920644293646128LL;
int zero = 0;
unsigned char var_19 = (unsigned char)71;
unsigned char var_20 = (unsigned char)19;
signed char var_21 = (signed char)-36;
_Bool var_22 = (_Bool)0;
int var_23 = -1039447083;
unsigned char var_24 = (unsigned char)32;
unsigned long long int var_25 = 10169237849187327785ULL;
int var_26 = -1505610683;
short var_27 = (short)-15208;
int var_28 = -1658079798;
unsigned short var_29 = (unsigned short)36708;
signed char var_30 = (signed char)48;
int var_31 = 334833831;
unsigned char var_32 = (unsigned char)138;
unsigned short arr_2 [25] ;
short arr_3 [25] [25] ;
long long int arr_7 [25] ;
signed char arr_8 [25] [25] [25] [25] ;
int arr_9 [25] [25] ;
signed char arr_10 [25] ;
signed char arr_22 [25] [25] [25] [25] [25] ;
signed char arr_23 [25] [25] [25] [25] [25] ;
unsigned short arr_25 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)48207;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)22890;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -6478603962791073501LL : -4931397619890114769LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 1976073149;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)2438;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
