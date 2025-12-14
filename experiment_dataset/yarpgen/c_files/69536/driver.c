#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -125857039;
long long int var_1 = -1207675417302285913LL;
int var_3 = -106155613;
unsigned int var_4 = 282936091U;
unsigned char var_6 = (unsigned char)171;
unsigned long long int var_8 = 13405274649296456857ULL;
unsigned char var_9 = (unsigned char)74;
unsigned int var_10 = 3053613356U;
unsigned short var_11 = (unsigned short)18594;
short var_12 = (short)8040;
int zero = 0;
long long int var_13 = 107434285716669940LL;
long long int var_14 = 7660304874420798276LL;
unsigned long long int var_15 = 11947264965354514474ULL;
unsigned long long int var_16 = 8680666137376262864ULL;
long long int var_17 = 5628052216445229712LL;
long long int var_18 = -436692155609717591LL;
int var_19 = -1236865569;
signed char var_20 = (signed char)-40;
short var_21 = (short)-6551;
int var_22 = 1542341176;
short var_23 = (short)-21503;
unsigned int arr_6 [22] [22] ;
long long int arr_7 [22] ;
unsigned long long int arr_17 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 2786192186U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -5109040789905331269LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = 15179110748154535332ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
