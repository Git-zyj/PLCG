#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
int var_1 = 387932901;
unsigned char var_2 = (unsigned char)187;
int var_7 = -1535831767;
long long int var_8 = 2647963989564921112LL;
int var_9 = 1871782713;
unsigned long long int var_11 = 6227425733867093082ULL;
unsigned short var_12 = (unsigned short)23890;
unsigned char var_13 = (unsigned char)227;
long long int var_14 = 7514907876844131920LL;
short var_18 = (short)-25012;
int zero = 0;
long long int var_19 = 9151217977767779808LL;
unsigned long long int var_20 = 8617292750137011038ULL;
short var_21 = (short)30241;
_Bool var_22 = (_Bool)1;
short var_23 = (short)17666;
unsigned long long int var_24 = 13216419607536798885ULL;
unsigned short arr_4 [15] [15] ;
long long int arr_5 [15] [15] ;
long long int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)20013;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 7770687169736139756LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 1511958208056399047LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
