#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -880952001;
unsigned char var_1 = (unsigned char)215;
int var_3 = 1983702642;
unsigned char var_7 = (unsigned char)81;
unsigned char var_8 = (unsigned char)19;
int var_10 = 382846659;
unsigned char var_11 = (unsigned char)213;
int var_14 = 1170479187;
int zero = 0;
unsigned char var_16 = (unsigned char)19;
int var_17 = -844570983;
unsigned char var_18 = (unsigned char)70;
unsigned char var_19 = (unsigned char)28;
int var_20 = 813012336;
int var_21 = -71482831;
int arr_0 [19] ;
int arr_2 [19] ;
unsigned char arr_3 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -1738744803;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 382371676;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)81;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
