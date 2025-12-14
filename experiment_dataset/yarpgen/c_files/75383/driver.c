#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2507692940125042088LL;
short var_1 = (short)16757;
unsigned short var_2 = (unsigned short)23127;
unsigned int var_3 = 1812098037U;
unsigned short var_5 = (unsigned short)57639;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-88;
long long int var_8 = 6519722035076827384LL;
long long int var_9 = -3407081192050701048LL;
unsigned char var_10 = (unsigned char)102;
long long int var_11 = -6316993582022726585LL;
int zero = 0;
unsigned short var_13 = (unsigned short)56098;
long long int var_14 = -5331584948418277181LL;
long long int var_15 = 2055636594704765837LL;
int var_16 = -497459105;
short var_17 = (short)-5291;
unsigned long long int var_18 = 9515596400134870659ULL;
unsigned long long int arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
unsigned short arr_3 [17] [17] ;
long long int arr_4 [17] ;
long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 13564021367010629270ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)26612;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)57964;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 4958229020596223545LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -4510351463205688647LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
