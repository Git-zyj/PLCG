#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)204;
long long int var_7 = 1998699036712069558LL;
int var_11 = -1478049039;
short var_12 = (short)-26140;
unsigned long long int var_13 = 10995606009502509118ULL;
unsigned long long int var_16 = 3076352707105269965ULL;
int zero = 0;
int var_18 = 1138317245;
short var_19 = (short)30266;
signed char var_20 = (signed char)-15;
int var_21 = 1694080669;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)37515;
unsigned int arr_1 [17] ;
unsigned char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 585021756U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)9;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
