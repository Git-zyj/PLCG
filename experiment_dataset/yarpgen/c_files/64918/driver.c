#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-19;
unsigned int var_1 = 4048638594U;
int var_2 = 328389448;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 7502320571622090451ULL;
unsigned char var_6 = (unsigned char)16;
_Bool var_9 = (_Bool)1;
long long int var_10 = 7037418986894569512LL;
signed char var_12 = (signed char)-5;
unsigned char var_15 = (unsigned char)26;
signed char var_16 = (signed char)30;
unsigned char var_18 = (unsigned char)119;
int zero = 0;
unsigned short var_19 = (unsigned short)30018;
unsigned char var_20 = (unsigned char)192;
short var_21 = (short)-4079;
unsigned int var_22 = 795870578U;
signed char var_23 = (signed char)117;
signed char var_24 = (signed char)-126;
signed char var_25 = (signed char)28;
unsigned char var_26 = (unsigned char)205;
unsigned char arr_1 [20] ;
unsigned long long int arr_2 [20] [20] [20] ;
unsigned char arr_3 [20] ;
unsigned char arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 12557523940474604755ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)89 : (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)131;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
