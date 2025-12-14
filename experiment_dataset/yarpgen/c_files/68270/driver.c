#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12422;
unsigned char var_2 = (unsigned char)71;
unsigned char var_7 = (unsigned char)112;
unsigned char var_9 = (unsigned char)251;
signed char var_11 = (signed char)-103;
signed char var_12 = (signed char)61;
int zero = 0;
signed char var_17 = (signed char)98;
signed char var_18 = (signed char)-73;
unsigned short var_19 = (unsigned short)14584;
unsigned char var_20 = (unsigned char)199;
unsigned char arr_0 [19] ;
signed char arr_1 [19] ;
signed char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)6;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
