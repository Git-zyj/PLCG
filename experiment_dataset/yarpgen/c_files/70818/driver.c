#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)189;
short var_2 = (short)-24424;
unsigned short var_3 = (unsigned short)43933;
int var_5 = 491394578;
signed char var_6 = (signed char)-106;
signed char var_7 = (signed char)-44;
int var_9 = 1058064261;
signed char var_11 = (signed char)-9;
int zero = 0;
unsigned char var_12 = (unsigned char)131;
int var_13 = -775571308;
unsigned char var_14 = (unsigned char)102;
signed char arr_2 [17] ;
int arr_5 [17] ;
long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -85659229;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -150973043425745948LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
