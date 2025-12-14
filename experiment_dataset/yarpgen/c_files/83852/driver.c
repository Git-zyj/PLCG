#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7338792068603534582LL;
unsigned long long int var_5 = 8908135484379334747ULL;
int var_6 = 1942446167;
unsigned long long int var_9 = 9194170102331514578ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)164;
int zero = 0;
unsigned short var_15 = (unsigned short)57133;
unsigned long long int var_16 = 5027618846662110168ULL;
unsigned short var_17 = (unsigned short)2681;
unsigned long long int var_18 = 7211123581343338322ULL;
unsigned char var_19 = (unsigned char)122;
unsigned int var_20 = 3107972815U;
unsigned long long int var_21 = 6825203004945507700ULL;
long long int var_22 = -1908626088979443903LL;
int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
long long int arr_2 [17] ;
short arr_4 [17] ;
int arr_5 [17] [17] ;
_Bool arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -904845771;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 14041584326045365626ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -6843395398432799635LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)20206;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 2048207073;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
