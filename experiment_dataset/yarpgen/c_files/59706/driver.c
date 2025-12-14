#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4909765853188068728LL;
unsigned char var_7 = (unsigned char)19;
unsigned long long int var_9 = 17238875881104109437ULL;
long long int var_12 = 8817685491246825675LL;
long long int var_13 = 5378310694979983882LL;
unsigned char var_14 = (unsigned char)34;
int var_15 = -323228333;
int zero = 0;
long long int var_16 = -293179490419068977LL;
long long int var_17 = -5821107723564061578LL;
int var_18 = 50702889;
unsigned char var_19 = (unsigned char)219;
unsigned char var_20 = (unsigned char)20;
int var_21 = 1723182180;
long long int arr_0 [15] ;
unsigned char arr_1 [15] [15] ;
long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -2604509170740485938LL : 2021117781901795004LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 8106617678922912641LL : -8831022400111440783LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
