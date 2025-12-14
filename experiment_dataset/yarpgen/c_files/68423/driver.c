#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2033937786;
int var_11 = 84914150;
int var_12 = -1692968202;
unsigned char var_15 = (unsigned char)145;
unsigned char var_18 = (unsigned char)181;
int zero = 0;
unsigned long long int var_19 = 12849666484809232882ULL;
unsigned long long int var_20 = 8725216152029450676ULL;
int var_21 = -1594024324;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)56;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_1 [23] ;
unsigned char arr_4 [23] ;
signed char arr_8 [23] [23] ;
unsigned long long int arr_9 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 5310547931708498757ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 8210298328794469577ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
