#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)73;
signed char var_4 = (signed char)127;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_13 = (short)18015;
long long int var_18 = 8052554988220305614LL;
int zero = 0;
long long int var_19 = 4845211917249304409LL;
short var_20 = (short)5168;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)97;
short var_23 = (short)7945;
int arr_0 [22] ;
unsigned short arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 186856412;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)36638;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
