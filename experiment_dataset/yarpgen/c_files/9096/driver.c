#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9072867407988169226LL;
unsigned char var_4 = (unsigned char)59;
unsigned int var_5 = 1200423395U;
unsigned char var_6 = (unsigned char)162;
int var_8 = 91330566;
unsigned short var_9 = (unsigned short)45313;
unsigned int var_10 = 3724279695U;
long long int var_12 = -4372916767076583945LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -1916837263091633656LL;
unsigned short var_16 = (unsigned short)31761;
unsigned long long int var_17 = 3041789236831064755ULL;
unsigned char var_18 = (unsigned char)15;
int arr_1 [12] [12] ;
unsigned int arr_2 [12] [12] ;
long long int arr_6 [12] [12] [12] ;
unsigned char arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -1446525682;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3259498970U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6354811357680992812LL : 2320503401107826425LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)174 : (unsigned char)98;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
