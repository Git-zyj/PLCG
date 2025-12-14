#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9845;
signed char var_2 = (signed char)31;
unsigned short var_3 = (unsigned short)36573;
long long int var_4 = 1337525413181552264LL;
unsigned short var_5 = (unsigned short)33026;
unsigned short var_7 = (unsigned short)55133;
unsigned short var_9 = (unsigned short)63216;
int zero = 0;
unsigned long long int var_10 = 1941555090272465843ULL;
unsigned long long int var_11 = 17356674585089434716ULL;
unsigned char var_12 = (unsigned char)81;
unsigned char arr_2 [14] ;
unsigned short arr_4 [14] ;
signed char arr_5 [14] [14] [14] ;
unsigned int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)41291;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 1380955338U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
