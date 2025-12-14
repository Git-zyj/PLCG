#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
unsigned short var_4 = (unsigned short)31488;
unsigned char var_5 = (unsigned char)81;
unsigned char var_6 = (unsigned char)56;
int var_7 = 1781926977;
unsigned short var_9 = (unsigned short)34215;
unsigned short var_10 = (unsigned short)46047;
int var_11 = -1691526482;
int zero = 0;
int var_12 = 2073179485;
unsigned char var_13 = (unsigned char)246;
int var_14 = -657497208;
unsigned char var_15 = (unsigned char)177;
int var_16 = -1327539582;
int var_17 = -687405200;
unsigned char arr_0 [20] ;
unsigned short arr_1 [20] [20] ;
int arr_2 [20] ;
int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)27469;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -979292486;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -804124381;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
