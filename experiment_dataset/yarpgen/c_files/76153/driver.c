#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61559;
signed char var_1 = (signed char)-79;
long long int var_3 = -1293468447898286440LL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)36267;
long long int var_6 = -5975004741933461969LL;
unsigned long long int var_7 = 18342595991092325225ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)198;
unsigned short var_13 = (unsigned short)35980;
unsigned long long int var_14 = 15032043124283697838ULL;
short var_15 = (short)-15995;
int zero = 0;
unsigned char var_16 = (unsigned char)231;
unsigned int var_17 = 957998411U;
long long int var_18 = 5738455151598127069LL;
long long int arr_0 [17] [17] ;
unsigned long long int arr_1 [17] ;
short arr_2 [17] [17] [17] ;
int arr_3 [17] ;
short arr_4 [17] [17] ;
short arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -5551404121165380102LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 6977491238384195272ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)30687;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 824560350;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-19563 : (short)31913;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-3664 : (short)-29621;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
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
