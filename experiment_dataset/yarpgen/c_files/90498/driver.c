#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
long long int var_1 = -3491629246230341534LL;
unsigned short var_4 = (unsigned short)61591;
signed char var_5 = (signed char)-123;
int var_6 = 1792482935;
unsigned int var_7 = 2226990653U;
unsigned char var_8 = (unsigned char)166;
long long int var_10 = 1112353065953130142LL;
unsigned short var_12 = (unsigned short)60839;
unsigned long long int var_13 = 11628402068474292153ULL;
unsigned long long int var_14 = 4572935663767091840ULL;
int var_15 = -800537183;
int zero = 0;
int var_16 = 1730107035;
unsigned int var_17 = 1209344292U;
unsigned char var_18 = (unsigned char)14;
int var_19 = 551825230;
signed char var_20 = (signed char)68;
unsigned long long int var_21 = 13916882681516607294ULL;
unsigned char var_22 = (unsigned char)15;
int var_23 = 1904160502;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 10739561381330164264ULL;
unsigned int var_26 = 442365953U;
int var_27 = 1631431480;
signed char arr_0 [14] ;
signed char arr_1 [14] ;
long long int arr_2 [11] ;
long long int arr_4 [11] ;
short arr_9 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)71 : (signed char)-102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -5650239354939755404LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -332935917977150260LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-17555;
}

void checksum() {
    hash(&seed, var_16);
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
