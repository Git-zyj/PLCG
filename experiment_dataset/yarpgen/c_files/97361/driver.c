#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11703;
unsigned char var_3 = (unsigned char)237;
signed char var_6 = (signed char)-33;
unsigned char var_8 = (unsigned char)7;
unsigned int var_13 = 3386267395U;
int zero = 0;
signed char var_15 = (signed char)89;
unsigned short var_16 = (unsigned short)13273;
unsigned char var_17 = (unsigned char)240;
signed char var_18 = (signed char)-77;
signed char var_19 = (signed char)-37;
signed char var_20 = (signed char)-5;
signed char var_21 = (signed char)-34;
unsigned char var_22 = (unsigned char)124;
unsigned char var_23 = (unsigned char)194;
signed char var_24 = (signed char)-63;
signed char arr_2 [22] ;
signed char arr_4 [22] [22] ;
signed char arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)70;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
