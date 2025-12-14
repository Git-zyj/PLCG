#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)38;
long long int var_4 = 7771948942533183905LL;
unsigned char var_6 = (unsigned char)19;
unsigned short var_7 = (unsigned short)21124;
unsigned char var_8 = (unsigned char)161;
unsigned char var_10 = (unsigned char)71;
unsigned short var_12 = (unsigned short)36458;
unsigned char var_13 = (unsigned char)10;
long long int var_14 = 4298205964595066446LL;
int zero = 0;
unsigned short var_15 = (unsigned short)41286;
long long int var_16 = 984165381022511152LL;
unsigned short var_17 = (unsigned short)51231;
unsigned char var_18 = (unsigned char)71;
unsigned char var_19 = (unsigned char)237;
long long int var_20 = -6775600624385910307LL;
unsigned char var_21 = (unsigned char)248;
unsigned short arr_3 [24] [24] [24] ;
unsigned short arr_4 [24] ;
long long int arr_5 [24] ;
unsigned char arr_8 [24] [24] [24] [24] [24] ;
unsigned short arr_9 [24] [24] ;
long long int arr_13 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)21137;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)43780;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 3466629779754338420LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)27920;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = -8579107062955703519LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
