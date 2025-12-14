#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4869315784842932648LL;
unsigned int var_1 = 1763171811U;
long long int var_2 = 5275426540762243630LL;
long long int var_4 = -7074753989109807920LL;
unsigned char var_6 = (unsigned char)104;
signed char var_7 = (signed char)-36;
unsigned short var_8 = (unsigned short)63498;
long long int var_12 = 7120192043195765803LL;
int var_14 = -89853110;
int zero = 0;
unsigned int var_15 = 1680390440U;
unsigned long long int var_16 = 10890277166483357732ULL;
long long int var_17 = 1966383586602082103LL;
_Bool var_18 = (_Bool)0;
unsigned int arr_0 [17] ;
long long int arr_1 [17] ;
short arr_4 [17] [17] [17] ;
long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3886443004U : 1983698490U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -7383992166155467413LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)18653;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -6123202835735262617LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
